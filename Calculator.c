#include<stdio.h>
int main() {
    int a,b;
       char op;
       printf("Enter two operands:");
         scanf("%d %d",&a,&b);
         printf("enter an operator(+,-,*,/)");
         scanf(" %c",&op);
         switch(op) {
            case '+':
            printf("Addion = %d",a+b);
            break;
            case '-':
            printf("subtraction = %d",a-b);
            break;
            case '*':
            printf("Multiplication = %d",a*b);
            break;
            case '/':
            printf("Division = %d",a/b);
            break;
            default:
            printf("Error! operator is not correct");

         }
            return 0;
}
