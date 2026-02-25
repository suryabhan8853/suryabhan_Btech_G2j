#include<stdio.h>
int main () {
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    for(i = 0;i <=n;i++) {
    sum = sum + i;
    }
    printf("sum of number is : %d",sum);
    return 0;
}