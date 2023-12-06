#include "user.h"

int thread_create(void *fcn, void *arg1, void *arg2);
int thread_join();
void lock_init(lock_t *lock);
void lock_acquire(lock_t *lock);
void lock_release(lock_t *lock);