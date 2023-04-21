#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -Script  Print single numbers of base 10.
* Return: 0
*/

int main(void)
{
char alphabeta;

for (alphabeta = '0' ; alphabeta <= '9' ; alphabeta++)
{
putchar(alphabeta);
}
putchar(10);
return (0);
}
