#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to print
 * Return: On success 1.
 */
int _isdigit(int c)
{
	printf("isdigit\n");
	return (0);
}
/**
 * _strlen - returns the length of a string
 * @s: The character to print
 * Return: On success 1.
 */
int _strlen(char *s)
{
	printf("strlen\n");
	return (0);
}
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: The character to print
 * Return: On success 1.
 */
void _puts(char *s)
{
	printf("%s", s);
}
/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1.
 */
char *_strcpy(char *dest, char *src)
{
	return (dest);
}
/**
 * _atoi - converts a string to an integer
 * @s: The character to print
 * Return: On success 1.
 */
int _atoi(char *s)
{
	int number;

	number = atoi(s);
	return (number);
}

