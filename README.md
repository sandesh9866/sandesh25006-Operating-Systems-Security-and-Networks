# Lab 3: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab demonstrates how C programs interact with the Linux operating system.
It focuses on process execution, process identity, exit codes, standard input/output,
and conditional process termination.

## Objectives

- Understand the Linux process lifecycle.
- Create and monitor a long-running process.
- Understand PID and PPID.
- Use exit codes to communicate with the operating system.
- Understand standard input and output.
- Implement conditional execution and termination.

## Task 1: Long-Running Process

The program runs for 30 seconds using a loop and sleep().
The process is executed in the background using the `&` operator
and monitored using the `ps` command.

Command used:

    gcc task1_alive.c -o task1
    ./task1 &
    ps aux | grep task1

## Task 2: Process Identity

This task uses `getpid()` to obtain the current process ID (PID)
and `getppid()` to obtain the parent process ID (PPID).

Command used:

    gcc task2_identity.c -o task2
    ./task2 &
    ps -p PID -o pid,ppid,cmd

## Task 3: Exit Codes

This task demonstrates how a C program returns a status code to
the operating system.

- Exit code 0 = Success
- Exit code 1 = Failure

Commands used:

    gcc task3_exit.c -o task3
    ./task3
    echo $?

Positive input returned 0, while negative input returned 1.

## Task 4: Standard I/O

This task demonstrates standard input and output.
The `scanf()` function reads the user's name from standard input,
and `printf()` displays the result on standard output.

Command used:

    gcc task4_input.c -o task4
    ./task4

## Task 5: Conditional Execution and Termination

This task displays the current PID and asks the user whether
the program should continue.

- Input 1: Continue and return 0.
- Input 0: Exit and return 1.

Commands used:

    gcc task5_control.c -o task5
    ./task5
    echo $?

## Technologies Used

- C Programming Language
- GCC Compiler
- Ubuntu Linux
- Linux Process Management Commands
- Git and GitHub

## Conclusion

This lab demonstrated how C programs interact with the Linux operating system.
The tasks showed process execution, PID and PPID identification, exit status,
standard I/O, and conditional termination.

## Author

vboxuser
