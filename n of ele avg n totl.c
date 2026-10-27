//enter n alements in an array and print their average and total
#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter  elements %d:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("The total is: %d\n", sum);
    printf("The average is: %.2f\n", avg);
    getch();
}