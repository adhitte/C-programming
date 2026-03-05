#include <stdio.h>

int main() {
    char str[100];
    int start, length, i;

    printf("Enter a string: ");
    scanf("%s", str); 

    printf("Enter starting index and length: ");
    scanf("%d %d", &start, &length); 
    printf("The subset is: ");
    
    
    for (i = 0; i < length; i++) {
    printf("%c", str[start + i]); 
    }

    printf("\n");
    return 0;
}