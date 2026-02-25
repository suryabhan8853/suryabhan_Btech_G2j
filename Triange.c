
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter length of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if((a == b) ||(a == c) ||(b == c) )
     printf("isosceles triangle");
     else if(a == b && b== c)
     printf("Equilateral triangle");
    
    else
        printf("Scalene triangle");
    
    return 0;
}
