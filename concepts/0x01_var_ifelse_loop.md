# variables 
Variables are named storage locations in a program that hold data. They allow programmers to use symbolic names to represent and manipulate values in the computer's memory. 
Each variable is has to be one of the data type.
| Data Types       | Storage Size | Value Range                                      |
|------------------|--------------|--------------------------------------------------|
| char             | 1 byte       | -128 to 127                                      |
| unsigned char    | 1 byte       | 0 to 255                                         |
| short            | 2 bytes      | -32,768 to 32,767                                |
| unsigned short   | 2 bytes      | 0 to 65,535                                      |
| int              | 4 bytes      | -2,147,483,648 to 2,147,483,647                  |
| unsigned int     | 4 bytes      | 0 to 4,294,967,295                               |
| long             | 8 bytes      | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| unsigned long    | 8 bytes      | 0 to 18,446,744,073,709,551,615                  |

### Example (in C):

    int age = 25;
    float price = 19.99;
    char grade = 'A';

# if_else
if-else statements are control flow structures that allow a program to make decisions based on certain conditions. If a condition is true, one block of code is executed; otherwise, another block is executed.
### Example (in C):

    int number = 10;
    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is non-positive.\n");
    }

# Loops 
Loops are structures that allow a set of instructions to be repeated multiple times. They help automate repetitive tasks and are crucial for efficient program execution.
we have three types of loop: `while`, `for` and `do-while`.

### Examples (in C):

1- `While loop`

    int count = 1;
    while (count <= 5) {
        printf("Iteration %d\n", count);
        count++;
    }
2- `for loop`

    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
3- `do-while`

    int count = 1;
    do {
        printf("Iteration %d\n", count);
        count++;
    } while (count <= 5);   

## Algorithms

<b>By using those three concepts we can create different programs ideas

Examples:- </b>
| Program Idea                   | Description                                                                                   |
|---|---|
| Factorial Calculation          | Calculate the factorial of a given number using a loop.                                       |
| Palindrome Checker             | Check if a given number is a palindrome (reads the same backward as forward).                 |
| Fibonacci Sequence             | Generate and print the Fibonacci sequence up to a specified term using a loop.                |
| Prime Number Checker           | Check whether a given number is a prime number.                                               |
| Multiplication Table           | Generate and print the multiplication table for a given number using a loop.                  |
| Power Calculation              | Calculate the power of a number (e.g., x^y) using a loop.                                      |
| GCD (Greatest Common Divisor) | Find the greatest common divisor of two numbers using the Euclidean algorithm.                |
| Simple Calculator              | Build a basic calculator that performs addition, subtraction, multiplication, and division.   |
| Number Guessing Game            | Develop a number guessing game where the user tries to guess a randomly generated number.     |
| Pattern Printing               | Print various patterns (e.g., squares, triangles) using nested loops.                          |
