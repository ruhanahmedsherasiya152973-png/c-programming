//find out length of string with string function
#include<stdio.h>
void main()
{
    char str[100];
    int length;
    printf("Enter a string: ");
    gets(str);
    length = strlen(str);
    printf("Length of the string is: %d", length);
}
