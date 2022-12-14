
# 0x02-functions_nested_loops Directory


## Requirements
## General


## Allowed editors: vi, vim, emacs

## All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

### All your files should end with a new line

### A README.md file, at the root of the folder of the project is mandatory

### Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### You are not allowed to use global variables

### No more than 5 functions per file

### You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

### You are allowed to use _putchar

### You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

### In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

### The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file


 0-putchar.c script -  a program that prints _putchar, followed by a new line

 1-alphabet.c script - pa function that prints the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet(void);
You can only use _putchar twice in your code


 2-print_alphabet_x10.c script - pa function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code

3-islower.c script - a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise

4-isalpha.c - a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise

5-sign.c -  a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero

6-abs.c - a function that computes the absolute value of an integer.

Prototype: int _abs(int);

7-print_last_digit.c - a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit

8-24_hours.c - a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);

9-times_table.c - a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);
 
10-add.c -  a function that adds two integers and returns the result.

Prototype: int add(int, int);

11-print_to_98.c - a function that prints all natural numbers from n to 98, followed by a new line.

100-times_table.c -  a function that prints the n times table, starting with 0.

Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything

101-natural.c -  program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded)

102-fibonacci.c - a program that prints the first 50 Fibonacci numbers, starting with 1 and 2

103-fibonacci.c - rogram that finds and prints the sum of the even-valued terms

104-fibonacci.c - a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
