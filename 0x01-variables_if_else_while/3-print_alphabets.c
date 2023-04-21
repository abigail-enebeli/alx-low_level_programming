#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -script will Print only lower case  alphabet.
* Return: 0
*/

int main(void)
{

char alphabeta_i, alphabeta_f;

alphabeta_i = 'a';
alphabeta_f = 'z';

while (alphabeta_i <= alphabeta_f)
{
putchar(alphabeta_i);
alphabeta_i++;
if (alphabeta_i == 123)
{
alphabeta_i = 'A';
alphabeta_f = 'Z';
}
}
putchar(10);
return (0);
}
