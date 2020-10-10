# 0x0C. C - Preprocessor

## Learning Objectives

General

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. Object-like Macro](./0-object_like_macro.h)

- Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
```

```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
```

---

### [1. Pi](./1-pi.h)

- Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
```

```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
```

---

### [2. File name](./2-main.c)

- Write a program that prints the name of the file it was compiled from, followed by a new line.
  - You are allowed to use the standard library

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
```

---

### [3. Function-like macro](./3-function_like_macro.h)

- Write a function-like macro ABS(x) that computes the absolute value of a number x.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
```

```c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d
980, 980
```

---

### [4. SUM](./4-sum.h)

- Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
```

```c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e
1122
```

---

### [5. Worst abuse of the C preprocessor (IOCCC winner, 1986)](https://medium.com/@tuvo1106/abuse-of-the-c-preprocessor-4faa07be3481)

- Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.
  - Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
  - Your blog post should have at least one picture, at the top of the blog post
  - Publish your blog post on Medium or LinkedIn
  - Share your blog post at least on Twitter and LinkedIn

```
julien@ubuntu:~/c/ioccc$ cat hague.c
```

```c
#define DIT (
#define DAH )
#define __DAH   ++
#define DITDAH  *
#define DAHDIT  for
#define DIT_DAH malloc
#define DAH_DIT gets
#define _DAHDIT char
_DAHDIT _DAH_[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
;main           DIT         DAH{_DAHDIT
DITDAH          _DIT,DITDAH     DAH_,DITDAH DIT_,
DITDAH          _DIT_,DITDAH        DIT_DAH DIT
DAH,DITDAH      DAH_DIT DIT     DAH;DAHDIT
DIT _DIT=DIT_DAH    DIT 81          DAH,DIT_=_DIT
__DAH;_DIT==DAH_DIT DIT _DIT        DAH;__DIT
DIT'\n'DAH DAH      DAHDIT DIT      DAH_=_DIT;DITDAH
DAH_;__DIT      DIT         DITDAH
_DIT_?_DAH DIT      DITDAH          DIT_ DAH:'?'DAH,__DIT
DIT' 'DAH,DAH_ __DAH    DAH DAHDIT      DIT
DITDAH          DIT_=2,_DIT_=_DAH_; DITDAH _DIT_&&DIT
DITDAH _DIT_!=DIT   DITDAH DAH_>='a'?   DITDAH
DAH_&223:DITDAH     DAH_ DAH DAH;       DIT
DITDAH          DIT_ DAH __DAH,_DIT_    __DAH DAH
DITDAH DIT_+=       DIT DITDAH _DIT_>='a'?  DITDAH _DIT_-'a':0
DAH;}_DAH DIT DIT_  DAH{            __DIT DIT
DIT_>3?_DAH     DIT          DIT_>>1 DAH:'\0'DAH;return
DIT_&1?'-':'.';}__DIT DIT           DIT_ DAH _DAHDIT
DIT_;{DIT void DAH write DIT            1,&DIT_,1 DAH;}
```

```
julien@ubuntu:~/c/ioccc$ gcc hague.c -o h
hague.c:10:2: warning: return type defaults to ‘int’ [-Wimplicit-int]
 ;main   DIT   DAH{_DAHDIT
  ^
hague.c: In function ‘main’:
hague.c:6:17: warning: conflicting types for built-in function ‘malloc’
 #define DIT_DAH malloc
                 ^
hague.c:12:24: note: in expansion of macro ‘DIT_DAH’
 DITDAH   _DIT_,DITDAH  DIT_DAH DIT
                        ^
hague.c:15:35: warning: implicit declaration of function ‘__DIT’ [-Wimplicit-function-declaration]
 __DAH;_DIT==DAH_DIT DIT _DIT  DAH;__DIT
                                   ^
hague.c:18:7: warning: implicit declaration of function ‘_DAH’ [-Wimplicit-function-declaration]
 _DIT_?_DAH DIT  DITDAH   DIT_ DAH:'?'DAH,__DIT
       ^
hague.c: At top level:
hague.c:25:6: warning: return type defaults to ‘int’ [-Wimplicit-int]
 DAH;}_DAH DIT DIT_ DAH{   __DIT DIT
      ^
hague.c: In function ‘_DAH’:
hague.c:25:6: warning: type of ‘DIT_’ defaults to ‘int’ [-Wimplicit-int]
hague.c: At top level:
hague.c:27:17: warning: return type defaults to ‘int’ [-Wimplicit-int]
 DIT_&1?'-':'.';}__DIT DIT   DIT_ DAH _DAHDIT
                 ^
hague.c: In function ‘__DIT’:
hague.c:28:20: warning: implicit declaration of function ‘write’ [-Wimplicit-function-declaration]
 DIT_;{DIT void DAH write DIT   1,&DIT_,1 DAH;}
                    ^
/tmp/ccG1Yh1A.o: In function `main':
hague.c:(.text+0x14a): warning: the `gets' function is dangerous and should not be used.
julien@ubuntu:~/c/ioccc$ ./h
Hello, Holberton
.... . .-.. .-.. --- --..-- ? .... --- .-.. -... . .-. - --- -.
```

---

### 6. Fun with the preprocessor

- Write a program that can print Hello, Holberton, followed by a new line.

  - You are not allowed to use more than one line of code
  - You are not allowed to use more than 32 characters in the file 101-preprocessor_abuse.c, including the documentation of your functions and the preprocessor directives
  - You are not allowed to include other c files
  - You are not allowed to include other header files
  - Remember: your program should pass all Betty checks for style and documentation
  - You don’t have to use the -pedantic, -Wall, -Werror, -Wextra gcc flags
  - This program should be written in C and will be compiled with gcc

---

## Author

- **Pierre Beaujuge** - [PierreBeaujuge](https://github.com/PierreBeaujuge)