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
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

