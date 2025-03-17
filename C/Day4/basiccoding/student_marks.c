#include"../include/decision_making.h"
void student_marks()
 {
    int marks;
    printf("\n\nenter student marks");
    scanf("%d",&marks);
    if (marks>=75)
    {
        printf("\nyou pass with distinction");
    }
    else if (marks>=60)
    {
        printf("\nyou got first class");
    }
    else if (marks>=40)
    {
        printf("\nyou pass only");
    }
    else if (marks<40)
    {
        printf("\nyou are fail");
    }
    
}