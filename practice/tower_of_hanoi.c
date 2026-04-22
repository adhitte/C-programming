#include <stdio.h>

void move(int n, char Start, char Destination, char Helper) {
    if (n == 0) return; 

    move(n - 1, Start, Helper, Destination); 
    printf("%d: %c -> %c\n", n, Start, Destination); 
    move(n - 1, Helper, Destination, Start); 
}

int main() {
    move(3, 'A', 'C', 'B'); 
 return 0;
}