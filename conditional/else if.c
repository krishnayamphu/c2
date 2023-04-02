#include<stdio.h>
void main(){
float gpa;
printf("Enter gpa value: ");
scanf("%f",&gpa);
printf("Grade: ");
if(gpa>=3.6)
{
    printf("A+");
}
else if(gpa>=3.2)
{
    printf("A");
}
else if(gpa>=2.8)
{
    printf("B+");
}
else if(gpa>=2.4)
{
    printf("B");
}
else if(gpa>=2.0)
{
    printf("C+");
}
else if(gpa>=1.6)
{
    printf("C");
}
else if(gpa>=1.2)
{
    printf("D+");
}
else if(gpa>=0.8)
{
    printf("D");
}
else
{
    printf("NG");
}

}
