//write a string to greencity.txt and store reverse in cleancity.txt
#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp1, *fp2;
    char str[100], rev[100];
    int len, i, j;

    fp1 = fopen("greencity.txt", "w");
    fp2 = fopen("cleancity.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file!");
        return;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Write the string to greencity.txt
    fputs(str, fp1);

    // Remove newline character from the string if present
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    // Reverse the string
    j = 0;
    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    // Write the reversed string to cleancity.txt
    fputs(rev, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("String written to greencity.txt and its reverse to cleancity.txt\n");
}