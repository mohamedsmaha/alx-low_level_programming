#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
int i;
int j;
int head = 0;
int back = 0;
for (i = 0 ; i < 100 ; i++)
{
for (j = i + 1 ; j < 100; j++)
{
if (head != 0)
{
putchar(44);
putchar(32);
}
putchar((i > 10) ? ((i - (i % 10)) / 10) + 48 : 48);
putchar(i % 10 + 48);
putchar(32);
putchar((j > 10) ? ((j - (j % 10)) / 10) + 48 : 48);
putchar(j % 10 + 48);
head++;
}
}
putchar('\n');
return (0);
}

