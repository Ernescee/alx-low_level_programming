#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0  (successful)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: Xlu byte(s) \n", (unsigned long)sizeof(b));
printf("size of a long long int: xlu byte(s) \n", (unsigned long)sizeof(d))
printf("size of a float: Xlu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
