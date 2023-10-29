# 아주대학교 전자공학운영체제 과제

## Phase1. Intro
- This first project is just a warmup, and thus relatively light on work.
- The goal of the project is simple: to add a system call to xv6.
    - Your system call, getreadcount (), simply returns how many times that the read() system call has been called by user processes since the time that the kernel was booted.

## Phase2. scheduling-xv6-lottery
- Objectives
    - To gain further knowledge of a real kernel.
    - To familiarize yourself with a scheduler.
    - To change that scheduler to a new algorithm.

- Implementations
    - New system calls
        - Implement int settickets(int number)
        - Implement int getpinfo(struct pstat *)
    - Handle child process state
        - Modify fork() system call
    - Lottery scheduler
        - Reimplement scheduler() to a lottery scheduler algorithm