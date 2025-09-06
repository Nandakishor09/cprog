#include <stdio.h>

int main(){

    int k, limit, i, j;

    printf("Enter a number: ");
    scanf("%d", &limit);
    j = 0; k = 0;

    for( k = 1; k <= limit; k++){

;        for ( i = 1; i <= k;){
            printf("%d ", i);
            i++;
        }
        for ( j = k - 1; j>= 1; j--){
            printf("%d ", j);
        }


        printf("\n");
    }

}
