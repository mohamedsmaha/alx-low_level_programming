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
int k;
for (i = 48 ; i < 58 ; i++)
{
for (j = i + 1 ; j < 58 ; j++)
{
for (k = j + 1 ; k < 58 ; k++)
{
if (i != 48 || j != 49 || k != 50)
{
putchar(32);
}
putchar(i);
putchar(j);
putchar(k);
if (k != 57 || j != 56 || i != 55)
{
putchar(44);
}
}
}
}
putchar('\n');
return (0);
}
