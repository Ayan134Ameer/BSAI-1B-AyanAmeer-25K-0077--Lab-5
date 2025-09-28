#include <stdio.h>
int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    if (age<5){
        printf("Free");

    }
    else if (age>=65)
    {
        printf("Discounted\n");
    }
    else{
        printf("Standard\n");

    }
    return 0;
}