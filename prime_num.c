#include <stdio.h>

int main(){

     int num;
     printf("Enter a number: ");
     scanf("%d", &num);


     for ( int i = 2; i <= num; i++){
        int count = 0;
        for ( int j = 2; j <= i / 2; j++){
            if ( i % j == 0){
                //printf("%d ", i);
                count++;
                break;
            }
        }
        if ( count == 0){
            printf("%d ", i);
        }
     }

}
