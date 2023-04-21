#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - script prints all the numbers of base 16 in lowercase.
* Return: 0
*/

int main(void)
{
char alphabeta;

for (alphabeta = '0' ; alphabeta <= '9' ; alphabeta++)
{
putchar(alphabeta);
}

for (alphabeta = 'a' ; alphabeta <= 'f' ; alphabeta++)
{
putchar(alphabeta);
}

putchar(10);
return (0);
}
