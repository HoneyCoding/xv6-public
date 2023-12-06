#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"
#include "mmu.h"
#include "x86.h"

int
thread_create(void *fcn, void *arg1, void *arg2)
{
    void *stack = malloc(PGSIZE * 2);
    if (!stack) {
        printf(1, "Error: stack is invalid\n");
        exit();
    }

    // return pid in clone function
    return clone(fcn, arg1, arg2, stack);
}

int
thread_join()
{
    void* stack;
    int threadid = join(&stack);
    if (threadid != -1) {
        free(stack);
    }

    return threadid;
}

void
lock_init(lock_t *lock)
{
    lock->flag = 0;
}

void
lock_acquire(lock_t *lock)
{
    // xchg is atomic operation in x86.h
    while (xchg(&(lock->flag), 1) == 1);
}

void
lock_release(lock_t *lock)
{
    lock->flag = 0;
}