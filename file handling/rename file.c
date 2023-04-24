#include<stdio.h>
void main()
{
    int status=rename("doc.txt","data.txt");
    if(status==0){
        printf("file renamed successfully");
    }else
    {
        printf("file can't rename");
    }
}
