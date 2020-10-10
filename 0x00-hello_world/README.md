# 0x00. C - Hello, World

## Learning Objectives

General

- Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official Holberton C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS using gcc 4.8.4
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. Preprocessor](./0-preprocessor)

- Write a script that runs a C file through the preprocessor and save the result into another file.
  - The C file name will be saved in the variable \$CFILE
  - The output should be saved in the file c

```
julien@ubuntu:~/c/0x00$ cat main.c
```

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4


# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
```

---

### [1. Compiler](./1-compiler)

- Write a script that compiles a C file but does not link.
  - The C file name will be saved in the variable \$CFILE
  - The output file should be named the same as the C file, but with the extension .o instead of .c.

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
```

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```

```
julien@ubuntu:~/c/0x00$ ./1-compiler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$
```

---

### [2. Assembler](./2-assembler)

- Write a script that generates the assembly code of a C code and save it in an output file.
  - The C file name will be saved in the variable \$CFILE
  - The output file should be named the same as the C file, but with the extension .s instead of .c.

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
```

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```

```
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
```

---

### [3. Name](./3-name)

- Write a script that compiles a C file and creates an executable named cisfun.
  - The C file name will be saved in the variable \$CFILE

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
```

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```

```
julien@ubuntu:~/c/0x00$ ./3-name
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
```

---

### [4. Hello, puts](./4-puts.c)

- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
  - Use the function puts
  - You are not allowed to use printf
  - Your program should end with the value 0

```
julien@ubuntu:~/c/0x00$ gcc 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
```

---

### [5. Hello, printf](./5-printf.c)

- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
  - Use the function printf
  - You are not allowed to use the function puts
  - Your program should return 0
  - Your program should compile without warning when using the -Wall gcc option

```
julien@ubuntu:~/c/0x00$ gcc -Wall 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
```

---

### [6. Size is not grandeur, and territory does not make a nation](./6-size.c)

- Write a C program that prints the size of various types on the computer it is compiled and run on.
  - You should produce the exact same output as in the example
  - Warnings are allowed
  - Your program should return 0
  - You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
```

---

### 7. What happens when you type gcc main.c

- Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.

---

### 8. Intel

- Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
  - The C file name will be saved in the variable \$CFILE.
  - The output file should be named the same as the C file, but with the extension .s instead of .c.

```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
```

```c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```

```
julien@ubuntu:~/c/0x00$ ./100-intel
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
```

---

### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

- Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
  - You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
  - Your program should return 1
  - Your program should compile without any warnings when using the -Wall gcc option

```
julien@ubuntu:~/c/0x00$ gcc -Wall -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
```

---

## Author

- **Pierre Beaujuge** - [PierreBeaujuge](https://github.com/PierreBeaujuge)