//copy one file to another file
#include <stdio.h>

void main()
{
    FILE *source, *target;
    char sourceFile[100], targetFile[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the target file name: ");
    scanf("%s", targetFile);

    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Unable to open source file.\n");
        return;
    }

    target = fopen(targetFile, "w");
    if (target == NULL)
    {
        printf("Unable to open target file.\n");
        fclose(source);
        return;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);
}