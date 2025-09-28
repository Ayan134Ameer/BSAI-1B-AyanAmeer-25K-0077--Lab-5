#include <stdio.h>
int main(){
    int Permission;
    int READ = 1;
    int WRITE = 2;
    int EXECUTE = 4;
    scanf("%d",&Permission);
    // Permission = 4;
    if (Permission&EXECUTE)
    {
        printf("Access Granted: Full Control\n");
    }
    else if ((Permission&READ)&&(Permission&WRITE))
    {
        printf("Access Granted: Read and Write\n");
    }
    else if ((Permission&READ)&&(Permission&WRITE)&&(Permission&&EXECUTE))
    {
        printf("Access Granted: Full Control\n");
    }
    else if (Permission&READ)
    {
        printf("Access Granted: Read only\n");
    }
    else if (Permission&WRITE)
    {
        printf("Access Granted: Write only\n");
    }
    else{
        printf("Access Denied\n");
    }
        
    
    

}