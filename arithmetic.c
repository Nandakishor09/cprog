#include <stdio.h>


int main() {

    float num1, num2;
    printf("ENTER A FLOAT NUMBER: ");
    scanf("%f", &num1);
    printf("ENTER A FLOAT NUMBER: ");
    scanf("%f", &num2);

    float sum = num1 + num2 ;
    float diff = num1 - num2;
    float prod = num1 * num2;
    float div = num1 / num2;

    printf("SUM = %f\n", sum);
    printf("DIFF = %f\n", diff);
    printf("PROD = %f\n", prod);
    printf("DIV = %f", div);


    return 0;
}


