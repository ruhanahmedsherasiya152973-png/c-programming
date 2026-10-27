#include<stdio.h>
#include<conio.h>
//udf find if palindome or not
int isPalindrome(int n)
{
    int rev = 0, temp = n;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (temp == rev);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPalindrome(num))
        printf("%d is a palindrome number.", num);
    else
        printf("%d is not a palindrome number.", num);
}
