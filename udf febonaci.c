#include<stdio.h>
#include<conio.h>
//udf to find fibonacci series upto user input
void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

void main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    fibonacci(num);
}
