#include<stdio.h>
int main() {
    int a[100],n,d,rev,i;
    printf("Enter no of element ");
    scanf("%d",&n);
    printf("Element of array\n");
    for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
    }
    for(i = n - 1;i >= 0;i--){
        rev = a[i];
        printf("%d ",rev);
    }
    return 0;
}
