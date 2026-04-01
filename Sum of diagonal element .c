 #include<stdio.h>
 int main() {
    int i,j,row,cols,sum = 0;
    printf("Enter no of row & cols\n");
    scanf("%d %d",&row,&cols);
    int A[row][cols],B[row][cols],C[row][cols];
     printf("Enter elements of 1st Mat.\n");
    for(i = 0;i<row;i++){
        for(j = 0;j < cols;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i = 0;i<row;i++){
        for(j = 0;j<cols;j++){
        if(i == j || (i+j == row - 1)){
            sum += A[i][j];
        }
        
        }
        }
        printf("sum of diagonal element = %d",sum);
        return 0;
 }
