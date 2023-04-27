void searchEmployee(){
    Employee e;
    f=fopen("employee.txt","r");
    char name[20];
    printf("Enter name: ");
    scanf("%s",&name);
    while(fread(&e,sizeof(e),1,f))
    {
        if(strcmpi(name,e.name)==0){
            printf("\n:::::::::: SEARCH EMPLOYEES ::::::::::::\n");
            printf("\n Employee Name \t\t\tSalary\n");
            printf("----------------------------------------\n");
            printf(" %-25s \t%-8d\n",e.name,e.salary);
            printf("----------------------------------------\n");
        }else{
            continue;
        }
    }
    fclose(f);
    fclose(fp);
}
