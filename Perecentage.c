#include<stdio.h>
int main() {
    float m1 = 93; // maths marks
    float m2 = 89; // physics marks
    float m3 = 85; // chem marks
    float m4 = 90; // english marks
    float m5 = 92; // hindi marks
    float sum;
    sum = (m1 + m2 + m3 + m4 + m5);
    printf("sum = %f\n",sum);
    float p = (m1 + m2 + m3 + m4 + m5)/5;
    printf("Percentage = %f", p);
    return 0;

}
