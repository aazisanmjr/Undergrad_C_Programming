
#include <stdio.h>

#define MAX_SIZE 100 //Maximum size of the array
/* 8.	Write a C program to input elements in array from user and count even and odd elements in array.
Example
Input
Input array: 1 2 3 4 5 6 7 8 9

Output
Total even elements: 4
Total odd elements: 5
*/
int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Assuming that there are 0 even and odd elements */
    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        /* If the current element of array is even then increment even count */
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
