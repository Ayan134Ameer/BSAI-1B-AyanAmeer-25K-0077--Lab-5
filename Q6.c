#include <stdio.h>
int main(){
    char Ask[2];
    char Ask2[2];
    printf("Choose Living room or Kitchen\n");
    printf("Enter L for living room or K for kitchen\n");
    scanf(" %c",&Ask[0]);
    printf("Choose Lights or Thermostat\n");
    printf("Enter L for Lights or T for thermostat\n");
    scanf(" %c",&Ask2[0]);
    if (Ask[0]=='L')
    {
        if (Ask2[0]=='L')
        {
            printf("Adjusting ambient lighting.\n");
        }
        else if (Ask2[0]=='T')
        {
            printf("Setting Living room temperature.\n");
        }
        
    }
    else{
        if (Ask2[0]=='L')
        {
            printf("Turning on bright task lighting\n");
        }
        else if (Ask2[0]=='T')
        {
            printf("Setting Kitchen Temperature\n");
        }
        
    }
    return 0;
}