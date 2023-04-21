#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
* Return: 0
*/

int main(void)
{
char alphabeta;

for (alphabeta = 'a' ; alphabeta <= 'z' ; alphabeta++)
{
putchar(alphabeta);
}
putchar(10);
return (0);
}
