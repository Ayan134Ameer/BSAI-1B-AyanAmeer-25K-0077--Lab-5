#include <stdio.h>
int main(){
    int Power;
    char LightColor;
    printf("Enter Power status: 1 for On and 0 for off\n");
    scanf("%d", &Power);
    if (Power==0)
    {
        printf("Signal Off\n");

    }
    else{
        char LightColor;
        printf("Enter Light Color: R for Red, Y for Yellow, G for Green\n");
        scanf(" %c",&LightColor);
        if (LightColor=='R')
        {
            printf("Stop\n");
        }
        else if (LightColor=='Y')
        {
            printf("Caution\n");
        }
        else{
            printf("Go");
        }
    
    }
    return 0;

      
}