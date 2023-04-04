#include<stdio.h>
#include<string.h>
void main(){
    char s1[]="aptech";
    char s2[]="APTECH";
    char s3[]="aptech";

    printf("both string are equal = %d\n",strcmp(s1,s3));
    printf("string are not equal = %d\n",strcmp(s1,s2));
    printf("string are not equal with ignore case:%d\n",strcmpi(s1,s2));
}
