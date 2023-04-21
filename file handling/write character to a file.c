#include<stdio.h>
void main()
{
    FILE *f;
    char ch;
    f=fopen("data.txt","w");
    printf("Enter some text:");
    while((ch=getchar())!='\n')
        {
            fputc(ch,f);
        }
    printf("Data write successfully");
    fclose(f);
}
