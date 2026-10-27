//write, read and display a file
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;

    // Open the file in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    // Write to the file
    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "This file contains some sample text.\n");
    fclose(fp);

    // Open the file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    // Read and display the contents of the file
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}