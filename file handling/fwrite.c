#include<stdio.h>
typedef struct
{
    char name[20];
    int salary;
}Employee;
FILE *f;
void main()
{
    f=fopen("employee.txt","w");
    Employee e={"Hari",26000};
    fwrite(&e,sizeof(e),1,f);
    printf("Data write successfully");
    fclose(f);
}
