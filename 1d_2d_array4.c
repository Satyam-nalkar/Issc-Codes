#include <stdio.h>

int main() {
    int i;
    char n[5]; 
    printf("Enter five characters:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf(" %c", &n[i]); 
    }
    printf("You entered these characters:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%c\n", n[i]); 
    }
    return 0;
}
