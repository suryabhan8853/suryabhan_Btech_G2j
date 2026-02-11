#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter b number : ");
    scanf("%d",&b);
    printf("Enter c number : ");
    scanf("%d",&c);
    if(a > b && a > c){
        printf("a is greatest number");
    }
        else if(b > c && b > c){
            printf("b is greatest number");
        }
            else {
            printf("c is greatese number");
            }
         
    

    
    return 0;
}