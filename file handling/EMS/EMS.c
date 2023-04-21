#include<stdio.h>
#include<conio.h>">
typedef struct{
    char name[20];
    int salary;
}Employee;
FILE *f;
void addEmployee();
void main()
{
    addEmployee();
}

void addEmployee(){
    Employee e;
    f=fopen("employee.txt","w");
    char next='y';
    while(next=='y'||next=='Y')
    {
        printf("\nName: ");
        scanf("%s",&e.name);
        printf("Salary: ");
        scanf("%d",&e.salary);
        fwrite(&e,sizeof(e),1,f);
        printf("Add another record? (Y/N): ");
        next=getche();
    }
    fclose(f);
}
