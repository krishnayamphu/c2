#include<stdio.h>
float calcPercentage(float price, float discount);
void main(){
printf("\nPercentage: %0.2f",calcPercentage(200,20));
}

float calcPercentage(float price, float discount){
    double p=(discount*100)/200;
    return p;
}
