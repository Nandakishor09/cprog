#include <stdio.h>

int main(){

    int step, i, limit,step2;
    //printf("Enter a limit: ");
    //scanf("%d", &limit);
    limit = 4;
    step2 = 1;
    for(step = 1; step <= limit; step++){

        for( i = 1; i <=step2; i++){
            printf("%c",* * i);

        }
        step2 = step2 + 2;
        printf("\n");



    }
    return 0;
}
