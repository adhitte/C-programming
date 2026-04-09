#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char data[]="Hello World!";
    char buffer[50];
    fp=fopen("file.txt","w");
    if(fp==NULL)    {
        printf("Error opening file!");
        return 1;   
}

fwrite(data,sizeof(char),sizeof(data),fp);
printf("Data written to file successfully.\n");

fseek(fp,0,SEEK_SET);

fread(buffer,sizeof(char),sizeof(data),fp);
printf("Data read from file: %s\n",buffer);

fclose(fp);
printf("File closed successfully.\n");
return 0;
}