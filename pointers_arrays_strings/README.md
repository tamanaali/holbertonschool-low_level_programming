

0. Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
i

Prototype: void reset_to_98(int *n);

task1. Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
julien@ubuntu:~/$ cat 1-main.c

2. Write a function that returns the length of a string.

Prototype: int _strlen(char *s);

3. Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);

4. Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);

5. Write a function that reverses a string.

Prototype: void rev_string(char *s);

6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);

7. Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string + 1) / 2

8. Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf

9. Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest

10. Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of "type" array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

MORE POINTERS, ARRAYS, AND STRINGS

0. Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

1. Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

2. Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy

3. Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp

4. Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array

5. Write a function that changes all lowercase letters of a string to uppercase.

Prototype: char *string_toupper(char *);
