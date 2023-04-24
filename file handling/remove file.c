#include<stdio.h>
void main()
{
    int status=remove("data.txt");
    if(status==0){
        printf("file removed successfully");
    }else
    {
        printf("file can't remove");
    }
}
