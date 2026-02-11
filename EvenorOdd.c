#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
     printf("Enter b number :");
    scanf("%d",&b);
    if(a % 2==0){
        printf("Even number");
    }
        else{
            printf("odd number");
        }
       if(b % 2==0){
        printf("Even number");
    }
        else{
            printf("odd number"); 
        }
    return 0;

}