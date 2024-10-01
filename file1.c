#include <stdio.h>
int main() 
{
    FILE *abc;
    abc = fopen("ok.txt", "w"); 
    if (abc == NULL) 
    {
        printf("Error opening file\n");
        return 1; 
    }
    char str[100];  
    fgets(str,100,abc);
     scanf("%s",str);
    fprintf(abc, "%s\n", str); 
    fclose(abc); 
    printf("String write to the file: %s\n", str);
    return 0;
}
