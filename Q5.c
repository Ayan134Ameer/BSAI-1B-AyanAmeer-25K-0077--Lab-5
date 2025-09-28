#include <stdio.h>
int main(){
    int IsCourseFull;
    int HasPrerequisite;
    printf("Enter the course status: 1 for full and 0 for Empty\n");
    scanf("%d",&IsCourseFull);
    printf("Enter if you have prerequisite available: 1 for yes 0 for no\n");
    scanf("%d",&HasPrerequisite);
    if (HasPrerequisite==1)
    {
        if (IsCourseFull==1)
        {
            printf("Can't enroll: Course is full\n");
            
        }
        else if (IsCourseFull==0)
        {
            printf("Enrolled Successfully\n");
        }
        
        
    }
    else{
        if (IsCourseFull==1)
        {
            printf("Can't enroll: Don't have prerequisite\n");
        }
        else{
            printf("Can't enroll: Prerequisite is missing and course is full\n");
        }
        
    }
    

}