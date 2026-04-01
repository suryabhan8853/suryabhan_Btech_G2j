 #include<stdio.h>
 int main() {
    int i,j,row,cols,freq=0,key;
    printf("Enter no of row & cols\n");
    scanf("%d %d",&row,&cols);
    int A[row][cols],B[row][cols],C[row][cols];
     printf("Enter elements of 1st Mat.\n");
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter number to find frequency ; ");
    scanf("%d",&key);
     for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            if(A[i][j] == key){
                freq++;
               }
        }
     }
   printf("most frequency is %d",freq);
    return 0;
 }
