#include <stdio.h>

int main() {
    FILE *abc;
    abc = fopen("ok.txt", "r"); 
    if (abc == NULL) 
    {
        printf("Error opening file\n");
        return 1; 
    }
    char str[100];  
    fgets(str,100,abc);  
    fprintf(abc, "%s\n", str); 
    fclose(abc); 
    printf("String written from file: %s\n", str);
    return 0;
}
