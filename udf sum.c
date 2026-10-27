#include<stdio.h>
#include<conio.h>
//udf to find addition of two numbers
int add(int a, int b)
{
    return a + b;
}
 
int main()
{
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("Sum of %d and %d is: %d", num1, num2, sum);
    return 0;
}
