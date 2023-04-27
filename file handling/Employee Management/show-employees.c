void showEmployees(){
    Employee e;
    f=fopen("employee.txt","r");
    if(f==NULL){
        printf("file not found");
    }else{
      //printf("::::::::::::::::::::::::::::::::::::::::");
        printf("\n:::::::::: ALL EMPLOYEES :::::::::::::::\n");
        printf("\n Employee Name \t\t\tSalary\n");
        printf("----------------------------------------\n");
        while(fread(&e,sizeof(e),1,f)){
            printf(" %-25s \t%-8d\n",e.name,e.salary);
            printf("----------------------------------------\n");
        }
    }
    fclose(f);
}
