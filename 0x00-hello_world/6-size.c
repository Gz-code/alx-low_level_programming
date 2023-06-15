#include<stdio.h>
/**
 * main - Aprogram that prints the soize of various computer typers
 * Return 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of the Char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of the int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of the long: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of the long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of the float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
