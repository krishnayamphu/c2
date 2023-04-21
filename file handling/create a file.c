#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("document.txt","w");
    printf("File created successfully");
    fclose(f);
}
