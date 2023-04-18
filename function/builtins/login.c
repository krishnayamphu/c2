#include<stdio.h>
#include<string.h>
void main(){
    char username[]="aptech";
    char password[]="a123";

    if(strcmpi(username,"admin")==0 && strcmp(password,"a123")==0){
        printf("Login Successfully");
    }else{
        printf("Invalid username or password");
    }
}
