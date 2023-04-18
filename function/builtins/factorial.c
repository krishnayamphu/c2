#include<stdio.h>
int fact(int n);
void main(){
printf("Output: %d",fact(5));
}
int fact(int n){
    int f;
    if(n==1){
        return 1;
    }else{
        f=n*fact(n-1);
    }
    return f;
}
