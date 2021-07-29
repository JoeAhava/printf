#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    printf("Normal:[%d]\n", -12);
    _printf("Normal:[%d]\n", 12);
     printf("Plus:[%+d]\n", -12);
    _printf("Plus:[%+d]\n", 12);
    printf("Space:[% d]\n", 12);
    _printf("Space:[% d]\n", 12);	
     printf("Harsh:[%#d]\n", 12);
    _printf("Harsh:[%#d]\n", 12);
    return (0);
}
