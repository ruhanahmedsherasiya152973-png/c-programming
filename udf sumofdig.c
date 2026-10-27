#include<stdio.h>
#include<conio.h>
//sum of a numbers digits
int sumofdigits(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = sumofdigits(num);
    printf("Sum of digits of %d is: %d", num, sum);
    return 0;
}
