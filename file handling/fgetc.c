#include<stdio.h>
void main()
{
    FILE *f;
    f=fopen("document.txt","r");
    printf("%c",fgetc(f));
    fclose(f);
}
