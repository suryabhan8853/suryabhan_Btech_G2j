#include<stdio.h>
int main() {
    float a[5] = {1,1.0/2,1.0/3,1.0/4,1.0/5},sum = 0;
    for(int i = 0;i < 5;i++){
       sum = sum + a[i];
    }
    printf("sum of series is = %f",sum);
    return 0;
}
    
    
 
    