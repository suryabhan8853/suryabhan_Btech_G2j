#include<stdio.h>
int main() {
    int i,j,row,cols;
    printf("Enter no of row & cols\n");
    scanf("%d %d",&row,&cols);
    int A[row][cols],B[row][cols],C[row][cols];
     printf("Enter elements of 1st Mat.\n");
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of 2nd = Mat.\n");
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            C[i][j] = A[i][j] + B[i][j];
            
        }
    }
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            print("%d",C[i][j]);
         }
         }
         return 0;
}
