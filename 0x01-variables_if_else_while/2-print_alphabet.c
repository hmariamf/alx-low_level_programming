#include <stdio.h>
/**
* main- print the alphabetes in lower cases.
* Description: using the main function
* Return: success.
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
