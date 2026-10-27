#include<stdio.h>
#include<conio.h>
//udf to reverse a number
int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("Reverse of %d is: %d", num, rev);
    return 0;
}
