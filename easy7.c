#include<stdio.h>
int main()
{
    int enteredPassword;
    const int correctPassword =123;
    do
    {
        printf("Enter the Password:");
        scanf("%d",&enteredPassword);
        if(enteredPassword!=correctPassword)
        {
            printf("Incorrect Password.Try again.");
        }
    } while (enteredPassword!=correctPassword);
    printf("Password granted!\n");
    return 0;
}