//sum of primes using dynamic array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, j, count = 0;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int flag = 0;
        for (j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] > 1)
        {
            count += arr[i];
        }
    }
    printf("Sum of prime numbers: %d", count);
    free(arr);
}