# 0x05. C - Pointers, arrays and strings

## Learning Objectives

General

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. 98 Battery st.](./0-reset_to_98.c)

- Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
  - Prototype: `void reset_to_98(int *n)`;

```
julien@ubuntu:~/0x05$ cat 0-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98
n=402
n=98
```

---

### [1. Don't swap horses in crossing a stream](./1-swap.c)

- Write a function that swaps the values of two integers.
  - Prototype: `void swap_int(int *a, int *b)`;

```
julien@ubuntu:~/0x05$ cat 1-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap
a=98, b=42
a=42, b=98
```

---

### [2. This report, by its very length, defends itself against the risk of being read](./2-strlen.c)

- Write a function that returns the length of a string.
  - Prototype: `int _strlen(char *s)`;

```
julien@ubuntu:~/0x05$ cat 2-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen
10
```

---

### [3. I do not fear computers. I fear the lack of them](./3-puts.c)

- Write a function that prints a string, followed by a new line, to stdout.
  - Prototype: `void _puts(char *str)`;

```
julien@ubuntu:~/0x05$ cat 3-main.c
```

```c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts
I do not fear computers. I fear the lack of them - Isaac Asimov
```

---

### [4. I can only go one way. I've not got a reverse gear](./4-print_rev.c)

- Write a function that prints a string, in reverse, followed by a new line.
  - `void print_rev(char *s)`;

```
julien@ubuntu:~/0x05$ cat 4-main.c
```

```c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
```

---

### [5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](./5-rev_string.c)

- Write a function that reverses a string.
  - Prototype: `void rev_string(char *s)`;

```
julien@ubuntu:~/0x05$ cat 5-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string
Holberton
notrebloH
```

---

### [6. Half the lies they tell about me aren't true](./6-puts2.c)

- Write a function that prints one char out of 2 of a string, followed by a new line.
  - Prototype: `void puts2(char *str)`;
  - The function should print only one character out of two, starting with the first one

```
julien@ubuntu:~/0x05$ cat 6-main.c
```

```c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2
02468
```

---

### [7. Winning is only half of it. Having fun is the other half](./7-puts_half.c)

- Write a function that prints half of a string, followed by a new line.
  - Prototype: `void puts_half(char *str)`;
  - The function should print the second half of the string
  - If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```
julien@ubuntu:~/0x05$ cat 7-main.c
```

```c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half
56789
```

---

### [8. Arrays are not pointers](./ 8-print_array.c)

- Write a function that prints n elements of an array of integers, followed by a new line.
  - Prototype: `void print_array(int *a, int n)`;
  - where n is the number of elements of the array to be printed
  - Numbers must be separated by comma, followed by a space
  - The numbers should be displayed in the same order as they are stored in the array
  - You are allowed to use printf

```
julien@ubuntu:~/0x05$ cat 8-main.c
```

```c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array
98, 402, -198, 298, -1024
```

---

### [9. strcpy](./9-strcpy.c)

- Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
  - Prototype: `char *_strcpy(char *dest, char *src)`;
  - Return value: the pointer to dest

```
julien@ubuntu:~/0x05$ cat 9-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", p);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
```

---

### [10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](./100-atoi.c)

- Write a function that convert a string to an integer.
  - Prototype: `int _atoi(char *s)`;
  - The number in the string can be preceded by an infinite number of characters
  - You need to take into account all the - and + signs before the number
  - If there are no numbers in the string, the function must return 0
  - You are not allowed to use long
  - You are not allowed to declare new variables of “type” array
  - You are not allowed to hard-code special values
  - Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
  - We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM
  - We will use gcc version 5 or above to compile

```
julien@ubuntu:~/0x05$ cat 100-main.c
```

```c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}
```

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi
98
-402
-98
214748364
0
402
98
402
```

---

### [11. Don't hate the hacker, hate the code](./101-keygen.c)

- Create a program that generates random valid passwords for the program 101-crackme.
  - You are allowed to use the standard library
  - You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
  - man srand, rand, time
  - gdb and objdump can help

```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-crackme "`./101-keygen`"
Tada! Congrats
```

---

## Author

- **Pierre Beaujuge** - [PierreBeaujuge](https://github.com/PierreBeaujuge)