#include<stdio.h>
int main() {
    int a[100],n,sum = 0,avg,i;
    printf("Enter no of element ");
    scanf("%d",&n);
    printf("Element of array\n");
    for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++){
       sum = sum + a[i];
    }
    for(i = 0;i < n;i++){
        avg = sum/n;
    }
    printf("sum = %d\n",sum);
    printf("avg = %d",avg);

    return 0;
}