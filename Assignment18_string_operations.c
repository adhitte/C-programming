#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int i, len=0,flag=1;
    printf("Enter a string: ");
    scanf("%s", str1);

    while(str1[len] != '\0')
    {
         len++;
    }
    printf("Length of the string: %d\n", len);

    printf("Reverse: ");
    for(i=len-1; i>=0; i--)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    
    printf("Enter another string: ");
    scanf("%s", str2);
    if(strcmp(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    for(i=0;i<len/2;i++)
    {
        if(str1[i] != str1[len-1-i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

        if(strstr(str1,str2))
        {
            printf("Substring found\n");
        }
        else
        {
           printf("Substring not found\n");
        }
        return 0;
    }