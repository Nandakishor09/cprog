#include <stdio.h>

int main(){

    int i, sum, num;
    i = 1; sum = 0;

    printf("Enter a limit: ");
    scanf("%d", &num);

    while ( i <= num){
        sum = sum + (i * i);
        i++;
    }
    printf("Sum: %d", sum);
    return 0;
}
