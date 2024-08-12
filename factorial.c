#include<stdio.h>
 int main()
 {
    long n=0;
    printf("Enter n");
    scanf("%lu",&n);
    long fact =1;
    for(int i=n;i>=2;i--)
    fact=fact*i;
    printf("fact=%lu \n",fact);
    return 0;
 }