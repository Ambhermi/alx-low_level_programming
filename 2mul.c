/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
/0x04$ ./2-mul 
100352
-1646592
/0x04$ 
