#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,i,j;
    printf("enter no of rows and columns ");
    scanf("%d %d",&r,&c);
    int arr[10][10];
    int arr1[10][10];
    int arrx[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d %d", &arr[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d %d", &arr[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        
            arrx[i][j]=arr[i][j]+arr1[i][j];
        }
    }
        
    getch();
}