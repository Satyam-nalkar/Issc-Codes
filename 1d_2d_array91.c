#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter the string:");
    fgets(a,sizeof(a),stdin);
    printf("string: %s",a);
    return 0;
}