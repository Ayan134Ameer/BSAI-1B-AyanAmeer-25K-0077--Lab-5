#include <stdio.h>
int main(){
    int result;
    int result2;
    int result3;
    int a;
    int b;
    int c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    result = (b^2);
    result2 = -(4*a*c);
    result3 = result+result2;
    if (result3>0)
    {
        printf("The quardratic equation has 2 roots\n");
    }
    else if (result==0)
    {
        printf("The equation has only 1 root\n");
    }
    else{
        printf("The equation has no real roots\n");
    }
    return 0;
    

}