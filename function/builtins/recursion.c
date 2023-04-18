#include<stdio.h>
#include<string.h>
void main(){
    static int i=1;
    printf("hello world\n");
    i++;
    while(i<=5){
        main();
    }

}
