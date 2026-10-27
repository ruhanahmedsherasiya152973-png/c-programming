//find sum and avg of n numbers using dynamic array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i;
    float sum = 0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return;
    }
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    free(arr);
}