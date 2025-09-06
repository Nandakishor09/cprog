#include <stdio.h>

int main(){

    int num, check,i, j;

    printf("Enter a number: ");
    scanf("%d", &num);
    i = 0;
    j = 0;
    check = num;

    while ( num != 0){

        j = num % 10;
        i = j + 10 * i;
        num = num / 10;

    }
    printf("%d\n", i);


    if ( i == check)
        printf("Given number is a palindrome.");
    else
        printf("Given number is not a palindrome.");
}
