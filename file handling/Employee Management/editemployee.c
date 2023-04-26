#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
    char name[20];
    int salary;
}Employee;

FILE *f,*fp;
void updateEmployee();
void main()
{
    updateEmployee();
}

void updateEmployee(){
    Employee e;
    f=fopen("employee.txt","r");
    fp=fopen("temp.txt","w");
    char name[20];
    printf("Enter name: ");
    scanf("%s",&name);

    while(fread(&e,sizeof(e),1,f))
    {
        if(strcmpi(name,e.name)==0){
            printf("Enter New Name:");
            scanf("%s",&e.name);
            printf("Enter New Salary:");
            scanf("%d",&e.salary);
            fwrite(&e,sizeof(e),1,fp);
        }else{
            fwrite(&e,sizeof(e),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("employee.txt");
    rename("temp.txt","employee.txt");
    printf("file updated successfully.");
}
