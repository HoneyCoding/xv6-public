# 아주대학교 전자공학운영체제 과제

## Objectives
- You will implement some basic memory protection features for xv6


## Tasks
- Handle null-pointer dereference
- Implement new syscalls for memory protection
    - int mprotect(void *addr, int len)
    - int munprotect(void *addr, int len)

## Requirements
- You’ll be changing xv6 to support a feature virtually every modern OS does.
    1. Causing an exeption to occur when your program dereferences a null pointer
    2. Adding the ability to change the protection levels of some pages in a process’s address space