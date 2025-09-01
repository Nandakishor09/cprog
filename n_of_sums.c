#include <stdio.h>

int main(){

    int i, num, sum;
    i = 0; sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while ( i <= num ){

        sum = sum + i;
        i++;
    }
    printf("SUM: %d", sum);
}
