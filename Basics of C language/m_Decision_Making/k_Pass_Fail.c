#include <stdio.h>
int main()
{
    long int sap_id;
    char name[50];
    int physics_marks;
    int maths_marks;
    int programming_marks;
    int total_marks;
    float percentage;

    printf("Enter the Name of Student: -\n");
    scanf("%[^\n]%*c", &name);

    printf("Enter Sap ID of Student: -\n");
    scanf("%ld", &sap_id);

    printf("Enter Maths marks of Student: -\n");
    scanf("%d", &maths_marks);

    printf("Enter Physics marks of Student: -\n");
    scanf("%d", &physics_marks);

    printf("Enter Programming marks of Student: -\n");
    scanf("%d", &programming_marks);

    total_marks = maths_marks + physics_marks + programming_marks;
    percentage = total_marks / 3.0;

    printf("\n\t\tName of Student: %s",name);
    printf("\n\t\tSap ID of Student: %ld",sap_id);
    printf("\n\t\tPhysics Marks of Student: %d",physics_marks);
    printf("\n\t\tMaths Marks of Student: %d",maths_marks);
    printf("\n\t\tProgramming Marks of Student: %d",programming_marks);
    printf("\n\t\tPercentage of student: %f",percentage);

    if (percentage >= 60)
    {
        printf("\n\t\t\tFirst Division!\n");
    }
    else if (percentage >= 48 && percentage < 60)
    {
        printf("\n\t\t\tSecond Division!\n");
    }
    else if (percentage >= 36 && percentage < 48)
    {
        printf("\n\t\t\tPass!\n");
    }
    else
    {
        printf("\n\t\t\tFail!\n");
    }
    return 0;
}
