//7.	Write a C program to input elements in array and find frequency of each element in array.
/*Example
Input:  
Input array elements: 5, 10, 2, 5, 50, 5, 10, 1, 2, 2

Output
Frequency of 5 = 3
Frequency of 10 = 2
Frequency of 2 = 3
Frequency of 50 = 1
Frequency of 1 = 1
*/
#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Array fr will store frequencies of element    
    int fr[length];    
    int visited = -1;    
        
    for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                //To avoid counting same element again    
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
        
    //Displays the frequency of each element present in array    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    
