#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
    int i ; 
    for (i=0 ; i < 10 ; i++ )
    {
        print_alphabet();
        _putchar("\n");
    }
    _putchar('\n')
}
