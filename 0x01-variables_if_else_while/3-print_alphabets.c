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
for (i = 98; i != 92 ; i++)
{
putchar(i - 1);
if (i == 123)
{
i = 65;
}
}
putchar('\n');
return (0);
}
