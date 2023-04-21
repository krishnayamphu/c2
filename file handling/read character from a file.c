#include<stdio.h>
void main()
{
    FILE *f;
    char ch;
    f=fopen("data.txt","r");
    while((ch=fgetc(f))!=EOF)
        {
            printf("%c",ch);
        }
    fclose(f);
}
