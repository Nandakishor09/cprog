#include <stdio.h>

int main(){

    int num, max, i, max1;
    max = 0;
    i = 0;
    while ( i < 10){
        printf("Enter a number: ");
        scanf("%d", &num);

        //max1 = num;
        if ( num > max){
            max = num;//max = max1;
        }
        i++;
    }
    printf("Maximum among the numbers above is %d", max);
    return 0;
}
