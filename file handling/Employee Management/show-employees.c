void showEmployees(){
    Employee e;
    f=fopen("employee.txt","r");
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
