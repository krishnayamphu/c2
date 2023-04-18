#include<stdio.h>
void getName(char*);
void main(){
char name[]="ram adfasdfdasf asfasdfasfasdfadf";
char* pname;
pname=&name;
getName(pname);

}

void getName(char* name){
    printf("\nName: %s",name);
}
