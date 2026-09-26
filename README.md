# Lab 3: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab demonstrates how Linux operating systems manage processes.
The programs interact with the Linux kernel using system calls and
process control mechanisms.

## Objectives

- Understand process lifecycle in Linux
- Learn PID and PPID concepts
- Monitor running processes
- Understand exit codes
- Use standard input and output

## Tasks Completed

### Task 1: Long Running Process

Created a process that runs for 30 seconds using sleep().
The process was executed in the background and monitored using ps command.

### Task 2: Process Identity

Used:
- getpid() to get Process ID
- getppid() to get Parent Process ID

### Task 3: Exit Codes

Implemented return values:
- 0 = Success
- 1 = Failure

Verified using echo $? command.

### Task 4: Standard I/O

Used scanf() for input and printf() for output.

### Task 5: Conditional Execution

Created a program that changes execution based on user choice
and returns different exit codes.

## Concepts Covered

- Process lifecycle
- PID and PPID
- Background processes
- Linux system calls
- Exit status
- Standard input/output

## Author

Sandesh
