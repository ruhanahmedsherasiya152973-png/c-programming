//program to substract 2 matrices
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, r, c1;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c1);
    printf("Enter the elements of first matrix: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &b[i][j]);
    for(i=0; i<r; i++)
        for(j=0; j<c1; j++)
            c[i][j] = a[i][j] - b[i][j];
    printf("Subtraction of two matrices: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c1; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}