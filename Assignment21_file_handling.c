#include<stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error source file not found!");
        return 1;
    }
    destination = fopen("destination.txt", "w");
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");
    return 0;
}