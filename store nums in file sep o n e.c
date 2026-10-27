//store numbers 1 to 10 in data.txt and separate odd and even nums
#include <stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        return;
    }
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fptr, "%d is even\n", i);
        }
        else
        {
            fprintf(fptr, "%d is odd\n", i);
        }
    }
    fclose(fptr);
}