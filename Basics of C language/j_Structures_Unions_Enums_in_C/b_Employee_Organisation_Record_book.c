#include <stdio.h>

struct Person
{
    char name[20];
    char gender;
};

struct Employee 
{
    struct Person pr;
    int emp_id;
    int salary;
    int exp_yrs;    
};


struct Employee enter ()
{
    struct Employee employ;
        printf("Enter the name of employee: -\n");
        scanf("%[^\n]%*c", &employ.pr.name);
        fflush(stdin);

        printf("Enter the gender of employee: type m for male | f for female: -\n");
        scanf("%c", &employ.pr.gender);
        fflush(stdin);

        printf("Enter the id of employee: -\n");
        scanf("%d", &employ.emp_id);
        fflush(stdin);

        printf("Enter the salary of employee: -\n");
        scanf("%d", &employ.salary);
        fflush(stdin);

        printf("Enter the experience in years of employee: -\n");
        scanf("%d", &employ.exp_yrs);
        fflush(stdin);

        return employ;
}

void Print_Emp_fields(struct Employee employ)
{
    printf("%s\t%c\t%d\t%d\t%d\n", employ.pr.name,employ.pr.gender,employ.emp_id, employ.salary,employ.exp_yrs);
}

void StringCopy(char *pd, char *ps)
{
    int i = 0;
    while (ps[i]>0)
    {
        pd[i]=ps[i];
        i++;
    }
}

void Copy_Emp_fields(struct Employee *ref, struct Employee *copied) 
{
    *copied = *ref;
    // StringCopy(copied->pr.name, ref->pr.name);
    // copied->pr.gender = ref->pr.gender;
    // copied->emp_id = ref->emp_id;
    // copied->salary = ref->salary;
    // copied->exp_yrs = ref->exp_yrs;
}

int main()
{
    struct Employee emp1,emp2,emp3,emp4; 

    printf("Enter the form \n\n");

    printf("Enter the details of employee1: -\n");
    emp1=enter();
    printf("Entered successfully! \n");
    
    printf("Enter the details of employee2: -\n");
    emp2=enter();
    printf("Entered successfully! \n");
    
    printf("Enter the details of employee3: -\n");
    emp3=enter();
    printf("Entered successfully! \n");

    Copy_Emp_fields(&emp2,&emp4);
    printf("Printing form\n");
    // Print_Emp_fields(emp2);
    // printf("Printed Successfully");
    
    Print_Emp_fields(emp1);
    Print_Emp_fields(emp2);
    Print_Emp_fields(emp3);
    Print_Emp_fields(emp4);
    return 0;
}
