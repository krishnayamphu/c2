void removeEmployee(){
    Employee e;
    f=fopen("employee.txt","r");
    fp=fopen("temp.txt","w");
    char name[20];
    printf("Enter name: ");
    scanf("%s",&name);

    while(fread(&e,sizeof(e),1,f))
    {
        if(strcmpi(name,e.name)==0){
            continue;
        }else{
             fwrite(&e,sizeof(e),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("employee.txt");
    rename("temp.txt","employee.txt");
    printf("data deleted.");
}
