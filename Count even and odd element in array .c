#include<stdio.h>
int main() {
    int a[100],n,even = 0,odd = 0,i;
    printf("Enter no of element ");
    scanf("%d",&n);
    printf("Element of array\n");
    for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++){
      if(a[i] % 2 ==0){
        even++;
      }  
      else {
      odd++;
      }
        
    }
    printf("No of even element = %d\n",even);
    printf("No of odd element = %d",odd);
    return 0;
}
