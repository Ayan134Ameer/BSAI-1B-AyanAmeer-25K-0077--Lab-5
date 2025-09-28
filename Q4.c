#include <stdio.h>
#include <string.h>
int main(){
    char val1[5] = "Ayan";
    int val2=9988;
    char UserName[5];
    int Password;
    printf("Enter the Username\n");
    scanf("%s",UserName);
    printf("Enter the password\n");
    scanf("%d",&Password);
    if (strcmp(UserName, val1)==0)
    {
        if (Password==val2)
        {
            printf("You are logged in\n");
        }
        else if (Password!=val2)
        {
            printf("Incorrect Password\n");
        }
    }
    else{
        printf("UserName not found\n");
    }
    
}