#include<stdio.h>
typedef struct
{
    char name[20];
    int salary;
}Employee;
FILE *f;
void main()
{
    f=fopen("employee.txt","r");
    Employee e;
    if(f==NULL){
        printf("file not found");
    }else{
        while(fread(&e,sizeof(e),1,f)){
             printf("\nName: %s",e.name);
             printf("\nSalary: %d",e.salary);
        }
    }
    fclose(f);
}
