#include<stdio.h>
#include<conio.h>
//max and min of n number of elements
void main()
{
    int n, i, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements %d:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);
    getch();
}