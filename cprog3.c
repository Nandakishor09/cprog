#include <stdio.h>

int main()
{

    int num1, num2, num3 ;
    printf("ENTER NUM1: ");
    scanf("%d", &num1);
    printf("ENTER NUM2: ");
    scanf("%d", &num2);
    printf("ENTER NUM3: ");
    scanf("%d", &num3);


    if (num1 >= num2 && num1 >= num3){
        printf("%d IS THE GREATEST NUMBER\n", num1);
        if ( num1 == num2 ){
            printf("%d IS THE MEDIAN", num3);
        }
        else if( num1 == num3){
            printf("%d IS THE MEDIAN", num2);
        }
        else if( num2 > num3){
            printf("%d IS THE MEDIAN", num2);
        }
        else{
            printf("%d IS THE MEDIAN", num3);
        }


    }
    else if(num2 >= num1 && num2 >= num3){
        printf("%d IS THE GREATEST NUMBER\n", num2);
        if ( num2 == num1){
            printf("%d IS THE MEDIAN", num3);
        }
        else if( num2 == num3){
            printf("%d IS THE MEDIAN", num1);
        }
        else if( num3 > num1){
            printf("%d IS THE MEDIAN", num3);
        }
        else{
            printf("%d IS THE MEDIAN",num1);
        }


    }
    else{
        printf("%d IS THE GREASTEST NUMBER\n", num3);
        if ( num3 == num2){
            printf("%d IS THE MEDIAN", num1);
        }
        else if(num3 == num1){
            printf("%d IS THE MEDIAN", num2);
        }
        else if( num2 > num1){
            printf("%d IS THE MEDIAN", num2);
        }
        else{
            printf("%d IS THE MEDIAN", num1);
        }
    }
    return 0;

}

