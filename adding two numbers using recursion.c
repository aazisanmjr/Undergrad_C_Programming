/*3.	Write a program to find sum of the first n numbers using recursion, where the value of n is provided by the user.
Example
Input: 5
Output: 15 	//1+2+3+4+5=15
*/
#include <stdio.h>
#include <stdlib.h>

int add(int,int);  //Function prototype        
int main()
{
    int x,y,result;  //variable declaration
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
     result=add(x,y);//function call
    printf("Sum of two numbers are: %d\n",result);
    getch();
    return 0;
}
int add(int x, int y)     //function declaration(recursive function)
{
    if(y==0)
        return x;
    else
        return(1+add(x,y-1));
}
