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
for (i = 48 ; i < 58 ; i++)
{
if (i != 48)
{
putchar(32)
}
putchar(i);
if (i != 57)
{
putchar(44);
}
}
putchar('\n');
return (0);
}

