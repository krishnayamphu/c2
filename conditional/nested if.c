#include<stdio.h>
void main(){
float eng,nep,total=0,p=0;
printf("Enter english and nepali subject marks:");
scanf("%f%f",&eng,&nep);
if(eng>=35 && nep>=35){
    total=eng+nep;
    p=total/2;
    printf("Result: Pass");
    printf("\nTotal: %0.2f",total);
    printf("\nPercentage: %0.2f",p);
    printf("\nDivision: ");
    if(p>=80){
        printf("Distinction");
    }else if(p>=60){
        printf("First");
    }else if(p>=45){
        printf("Second");
    }else{
        printf("Third");
    }
}else{
    printf("Fail");
}

}
