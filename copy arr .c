#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter no of ele ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements are\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    int o;
    int arr1[n];
    for(o=0;o<n;o++)
    {
        arr1[o]==arr[i];
    }
    printf("\ncopied elements are\n");
    for(o=0;o<n;o++)
    {
        printf("%d\t", arr[o]);
    }
    getch();
}