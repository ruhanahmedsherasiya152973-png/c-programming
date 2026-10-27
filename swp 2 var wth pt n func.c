//swap 2 variables with pointer and function
#include <stdio.h>
void swap(int *a, int *b)  
{  
    int temp;  
    temp = *a;  
    *a = *b;  
    *b = temp;  
}  
void main()  
{  
    int x, y;  
    printf("Enter two numbers: ");  
    scanf("%d %d", &x, &y);  
    printf("Before swapping: x = %d, y = %d\n", x, y);  
    swap(&x, &y);  
    printf("After swapping: x = %d, y = %d\n", x, y);
}
