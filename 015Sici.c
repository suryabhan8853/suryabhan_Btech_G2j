#include<stdio.h>
#include<math.h>
int main (){
    float principal,rate,time,si,ci,A;
    printf("Enter principal : ");
    scanf("%f",&principal);
    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);
    si = (principal * rate * time)/100;
    A = principal * pow((1 + rate/100), time);
    ci = A - principal; 
    printf("Your simple interest is : %f\n",si);
    printf("Compound Interest is : %f\n",ci);
    return 0;

    }