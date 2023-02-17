#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed
 * The string Last digit of n
 * Return: 0
 */
int main(void)
{
int n;
int ln;
srand(time(0));
n = rand() - RAND_MAX / 2;
ln = n % 10;
/* your code goes there */
printf("Last digit of %d is %d", n, ln);
if (ln > 5)
{
printf(" and is greater than 5\n");
}
else if (ln == 0)
{
printf(" and is 0\n");
}
else if (ln < 6 && ln != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
