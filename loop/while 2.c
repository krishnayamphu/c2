#include<stdio.h>
void main(){
    char ch;
    printf("Enter some character:");
    while((ch=getchar())!='\n'){
        printf("%c",ch);
    }
}
