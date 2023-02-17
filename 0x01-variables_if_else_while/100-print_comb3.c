#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print all alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int i;
int j;
for (i = 48 ; i < 58 ; i++)
{
for (j = i + 1 ; j < 58 ; j++)
{
if (i != 48 || j != 49)
{
putchar(32);
}
putchar(i);
putchar(j);
if (j != 57 || i != 56)
{
putchar(44);
}
}
}
putchar('\n');
return (0);
}

