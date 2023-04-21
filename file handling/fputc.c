#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("document.txt","w");
    fputc('a',f);
    printf("Data write successfully");
    fclose(f);
}
