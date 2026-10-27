#include<stdio.h>
#include<conio.h>
//add two matrices
void main()
{
    int a[10][10], b[10][10], c[10][10], i, j, r, c1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c1);
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of two matrices is:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    getch();
}