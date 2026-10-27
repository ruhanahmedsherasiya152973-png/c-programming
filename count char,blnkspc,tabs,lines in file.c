//count characters, blank spaces, tabs and lines in a file
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int char_count = 0, blank_count = 0, tab_count = 0, line_count = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        char_count++;
        if (ch == ' ')
            blank_count++;
        else if (ch == '\t')
            tab_count++;
        else if (ch == '\n')
            line_count++;
    }

    fclose(fp);

    printf("Total characters: %d\n", char_count);
    printf("Total blank spaces: %d\n", blank_count);
    printf("Total tabs: %d\n", tab_count);
    printf("Total lines: %d\n", line_count);
}