#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - script prints all letters in lower case except for 'e' and 'q'.
* Return: 0
*/

int main(void)
{
char alphabeta;

for (alphabeta = 'a' ; alphabeta <= 'z' ; alphabeta++)
{
if (alphabeta == 'e' || alphabeta == 'q')
{
continue;
}
else
{
putchar(alphabeta);
}
}
putchar(10);
return (0);
}
