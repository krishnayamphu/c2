#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);

    sum=x+y;

    printf("\nValue of x: %d",x);
    printf("\nValue of y: %d",y);
    printf("\nTotal sum: %d",sum);
    return 0;
}
