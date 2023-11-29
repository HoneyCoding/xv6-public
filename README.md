# 아주대학교 전자공학운영체제 과제

## Objectives
You will implement thread syscalls and libraries for xv6

## Tasks
- Implement new syscalls for kernel threads
    - int clone(void *fcn, void *arg1, void *arg2, void *stack)
    - int join(void **stack)
- Implement libraries for thread
    - int thread_create (void *fcn, void *arg1, void *arg2)
    - int thread_join()
    - void lock_init(lock_t *)
    - void lock_acquire(lock_t *)
    - void lock_release(lock_t *)

## Requirements
1. Implement a new system call to create a kernel thread, called **clone()**
2. Implement a new system call to wait for a thread, called **join()**
3. Implement user libraries for thread
    1. thread_create()
    2. thread_join()
    3. lock_init()
    4. lock_acquire()
    5. lock_release()