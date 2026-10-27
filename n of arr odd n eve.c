#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0) 
            printf("even %d ", arr[i]);
                if(arr[i] % 2 == 0 && arr[i]>0)
                    printf("positive %d ", arr[i]);
                else if(arr[i] % 2 == 0 && arr[i]<0)
                    printf("negative %d ", arr[i]);
        if(arr[i] % 2 != 0)
            printf("odd %d ", arr[i]);
            if(arr[i] % 2 != 0 && arr[i]>0)
                printf("positive %d ", arr[i]);
            else if(arr[i] % 2 != 0 && arr[i]<0)
            printf("negative %d ", arr[i]);
    }
    getch();
}