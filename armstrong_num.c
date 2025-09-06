#include <stdio.h>
#include <math.h>

int main(){

    int num, i, mod, sample, sum, neww, check;
    printf("Enter a number: ");
    scanf("%d", &num);

    sample = num;
    check = num;
    i = 0;
    sum = 0;
    neww = 0;
    while ( sample != 0){
        sample = sample / 10;
        i++;
    }
    printf("Length of integer is %d\n", i);

    while ( num != 0){

        mod = num % 10;
        sum = sum + pow(mod, i);
        neww = mod + 10 * neww;
        num = num / 10;

    }

    if ( sum == check)
        printf("Given number is a armstrong number\n");
    else
        printf("Given number is not a armstrong number\n");
    printf("Sum number is %d", sum);
}
