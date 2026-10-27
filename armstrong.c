#include<stdio.h>
#include<conio.h>
//udf to check if a number is an Armstrong number
int isArmstrong(int n)
{
    int sum = 0, temp = n, digits = 0;
    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0)
    {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return (sum == n);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
