#include <stdio.h>

int main(){

    int i, num;
    i = 1;
    printf("Enter a number for multiplication table: ");
    scanf("%d", &num);

    while ( i <= 10){

        printf("%d * %d = %d\n", num, i, (num*i));
        i++;
    }
    return 0;
}
