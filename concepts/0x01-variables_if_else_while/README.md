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

- [Source Code](link_to_source_code)
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

Feel free to explore the code and use it to enhance your understanding of C programming.
