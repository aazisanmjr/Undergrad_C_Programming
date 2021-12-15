//6.	Write a program that asks you to enter an ASCII code value, such as 66, and then prints the character having that ASCII code.
#include <stdio.h>

int main(int argc, char **argv)
{
char c;
printf("Enter an ASCII code in decimal:");
scanf("%d", &c);
printf("The value %d is the character '%c'\n", c, c);

return (0);
}
