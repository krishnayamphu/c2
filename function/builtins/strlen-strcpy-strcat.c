#include<stdio.h>
#include<string.h>
void main(){
    char name[]="Aptech";
    char company[20];
    printf("%d",strlen(name));

    strcpy(company,name);
    printf("\nCompany Name: %s",company);

    strcat(name," Computer Education");
    printf("\n%s",name);
}
