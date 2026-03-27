#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    char str1[100],str2[100];
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    printf("1.Length  2.Reverse  3.Concatenate  4.Equality  5.Palindrome  6.Substring\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of string1: %d\n", strlen(str1));
            printf("Length of string2: %d\n", strlen(str2));
            break;
        case 2:
            printf("Reverse of string1: ");
            for(int i=strlen(str1)-1; i>=0; i--)
            {
                printf("%c", str1[i]);
            }
            printf("\n");
            printf("Reverse of string2: ");
            for(int i=strlen(str2)-1; i>=0; i--)
            {
                printf("%c", str2[i]);
            }
            printf("\n");
            break;
        case 3:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 4:
            if(strcmp(str1, str2) == 0)
                printf("The strings are equal.\n");
            else
                printf("The strings are not equal.\n");
            break;
        case 5:
            int flag = 1;
            for(int i=0; i<strlen(str1)/2; i++)
            {
                if(str1[i] != str1[strlen(str1)-1-i])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                printf("String1 is a palindrome.\n");
            else
                printf("String1 is not a palindrome.\n");
            
             flag = 1;
             for(int i=0; i<strlen(str2)/2; i++)
             {
                 if(str2[i] != str2[strlen(str2)-1-i])
                 {
                     flag = 0;
                     break;
                 }
             }
             if(flag == 1)
                 printf("String2 is a palindrome.\n");
             else
                 printf("String2 is not a palindrome.\n");
             break;
        case 6:
             if(strstr(str1, str2))
                 printf("Substring found\n");
             else
                 printf("Substring not found\n");
             break;
        default:
             printf("Invalid choice\n");
    }
    return 0;
}