//5.	Write a program to find sum of first and last digits of the user input number.
#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit,digit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digit - 1
    digit    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digit));
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
