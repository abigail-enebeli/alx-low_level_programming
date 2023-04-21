#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - script prints the reverse of lower case alphabets.
* Return: 0
*/

int main(void)
{
char alphabeta;

for (alphabeta = 'z' ; alphabeta >= 'a' ; alphabeta--)
{
putchar(alphabeta);
}
putchar(10);
return (0);
}
