# 0x01. C - Variables, if, else, while

## Description

This repository contains solutions to tasks focused on the fundamental concepts in C programming, including variables, if statements, else statements, and while loops. Each task is designed to help you understand and practice different aspects of C programming.

## Learning Objectives

- Gain proficiency with arithmetic operators, logical operators, and relational operators.
- Understand the usage of if and if...else statements.
- Learn how to use while loops.
- Familiarize yourself with data types such as char, int, and unsigned int.
- Explore ASCII character set and related concepts.

## Files

1. **0-positive_or_negative.c**
   - This program assigns a random number to the variable `n` and prints whether it is positive, negative, or zero.

2. **1-last_digit.c**
   - This program assigns a random number to the variable `n` and prints the last digit of the number.

3. **2-print_alphabet.c**
   - A program that prints the alphabet in lowercase using only the `putchar` function.

4. **3-print_alphabets.c**
   - A program that prints the alphabet in lowercase, followed by uppercase, using only the `putchar` function.

5. **4-print_alphabt.c**
   - This program prints the alphabet in lowercase, excluding the letters 'q' and 'e', using only the `putchar` function.

6. **5-print_numbers.c**
   - A program that prints all single-digit numbers in base 10.

7. **6-print_numberz.c**
   - This program prints all single-digit numbers in base 10 without using variables of type `char`, using only the `putchar` function.

8. **7-print_tebahpla.c**
   - A program that prints the lowercase alphabet in reverse using only the `putchar` function.

9. **8-print_base16.c**
   - This program prints all numbers of base 16 in lowercase using only the `putchar` function.

10. **9-print_comb.c**
    - A program that prints all possible combinations of single-digit numbers.

11. **100-print_comb3.c**
    - A program that prints all possible different combinations of two digits.

12. **101-print_comb4.c**
    - This program prints all possible different combinations of three digits.

13. **102-print_comb5.c**
    - A program that prints all possible combinations of two two-digit numbers.

## Requirements

- The code is written in C.
- Compilation is done using the `gcc` compiler with specific options(`-Wall -Werror -Wextra -pedantic -std=gnu89`)
- Code follows the Betty style.
- You are not allowed to use system
- No errors or warnings during compilation.

## Resources

- [Everything you need to know to start with C](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240116%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240116T225610Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=af83b5737e62d2ee0b560905edc4fd0d95b06904d10704c9e1174d12a0f5550c)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in c](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

## How to Use

1. Clone the repository.
2. Navigate to the specific task directory.
3. Compile the C file using the provided gcc command.
4. Run the compiled program.

## Tasks

### 0. Positive anything is better than negative nothing

This program assigns a random number to the variable `n` each time it is executed. The goal is to complete the source code to print whether the number stored in the variable `n` is positive, negative, or zero.

#### Instructions

- Complete the [Source Code](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
- The variable `n` will store a different value every time you run this program.
- You don't have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not modify this code.
- The output of the program should be:
  - The number, followed by
  - If the number is greater than 0: is positive
  - If the number is 0: is zero
  - If the number is less than 0: is negative
  - Followed by a new line

#### Example

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
$ ./0-positive_or_negative
-520693284 is negative
$ ./0-positive_or_negative
561319348 is positive
$ ./0-positive_or_negative
0 is zero
```

### 1. The Last Digit

This program assigns a random number to the variable `n` each time it is executed. The task is to complete the source code to print the last digit of the number stored in the variable `n`.

- Complete the [Source Code](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
- The variable `n` will store a different value every time you run this program.
- You don't have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not modify this code.
- The output of the program should be:
  - The string "Last digit of," followed by
  - `n`, followed by
  - The string "is," followed by
  - If the last digit of `n` is greater than 5: the string "and is greater than 5"
  - If the last digit of `n` is 0: the string "and is 0"
  - If the last digit of `n` is less than 6 and not 0: the string "and is less than 6 and not 0"
  - Followed by a new line

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit
Last digit of -748255693 is -3 and is less than 6 and not 0
$ ./1-last_digit
Last digit of 954249937 is 7 and is greater than 5
$ ./1-last_digit
Last digit of 809065140 is 0 and is 0
```


### 2. The Alphabet Game

#### Description

This program prints the alphabet in lowercase, followed by a new line. The task is to achieve this using only the `putchar` function, with the restriction of using it only twice in the code.

#### Instructions

- All your code should be in the `main` function.
- You can only use the `putchar` function (every other function like `printf`, `puts`, etc., is forbidden).
- The output of the program should be the alphabet in lowercase, followed by a new line.

#### Example

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```


### 3. alphABET

#### Description

This program prints the alphabet in lowercase, followed by the alphabet in uppercase, both followed by a new line. The task is to achieve this using only the `putchar` function, with the restriction of using it only three times in the code.

#### Instructions

- All your code should be in the `main` function.
- You can only use the `putchar` function (every other function like `printf`, `puts`, etc., is forbidden).
- The output of the program should be the lowercase alphabet, followed by the uppercase alphabet, and a new line.

#### Example

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```

### 4. When I was having that alphabet soup, I never thought that it would pay off

#### Description

This program prints the alphabet in lowercase, followed by a new line, excluding the letters 'q' and 'e'. The task is to achieve this using only the `putchar` function, with the restriction of using it only twice in the code.

#### Instructions

- All your code should be in the `main` function.
- You can only use the `putchar` function (every other function such as `printf`, `puts`, etc., is forbidden).
- You are not allowed to use the `putchar` function more than twice in your code.
- The output of the program should be the lowercase alphabet excluding the letters 'q' and 'e', followed by a new line.

#### Example

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
```

### 5. Numbers

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$
```

### 6. Numberz

Write a program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.

- You are not allowed to use any variable of type char.
- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- You can only use putchar twice in your code.
- All your code should be in the main function.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$
```

### 7. Smile in the Mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- All your code should be in the main function.
- You can only use putchar twice in your code.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```

### 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- All your code should be in the main function.
- You can only use putchar three times in your code.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
```

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `, `, followed by a space.
- Numbers should be printed in ascending order.
- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- All your code should be in the main function.
- You can only use putchar four times maximum in your code.
- You are not allowed to use any variable of type char.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$
```

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `, `, followed by a space.
- Numbers should be printed in ascending order.
- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- All your code should be in the main function.
- You can only use putchar four times maximum in your code.
- You are not allowed to use any variable of type char.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$
```

### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need.

#### Task
Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by `,`, followed by a space.
- The two digits must be different.
- `01` and `10` are considered the same combination of the two digits `0` and `1`.
- Print only the smallest combination of two digits.
- Numbers should be printed in ascending order, with two digits.
- You can only use the `putchar` function (every other function like `printf`, `puts`, etc. is forbidden).
- You can only use `putchar` five times maximum in your code.
- You are not allowed to use any variable of type `char`.
- All your code should be in the `main` function.

#### Example
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```

### 11. The success combination in business is: Do what you do better... and: do more of what you do...

Write a program that prints all possible different combinations of three digits.

- Numbers must be separated by `, `, followed by a space.
- The three digits must be different.
- 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1, and 2.
- Print only the smallest combination of three digits.
- Numbers should be printed in ascending order, with three digits.
- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- You can only use putchar six times maximum in your code.
- You are not allowed to use any variable of type char.
- All your code should be in the main function.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$
```

### 12. Software is eating the World

Write a program that prints all possible combinations of two two-digit numbers.

- The numbers should range from 0 to 99.
- The two numbers should be separated by a space.
- All numbers should be printed with two digits. 1 should be printed as 01.
- The combination of numbers must be separated by a comma, followed by a space.
- The combinations of numbers should be printed in ascending order.
- 00 01 and 01 00 are considered the same combination of the numbers 0 and 1.
- You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
- You can only use putchar eight times maximum in your code.
- You are not allowed to use any variable of type char.
- All your code should be in the main function.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
julien@ubuntu:~/0x01$
```

Feel free to explore the code and use it to enhance your understanding of C programming.
