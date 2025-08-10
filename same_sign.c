#include <stdio.h>

int main(){


    int num1, num2;
    printf("ENTER NUM1: ");
    scanf("%d", &num1);
    printf("ENTER NUM2: ");
    scanf("%d", &num2);

    if( (num1> 0 && num2 > 0) || (num1 <0 && num2 <0) ){
            printf("BOTH NUM1 AND NUM2 HAVE SAME SIGN");

    }
    else{
        printf("NUM1 AND NUM2 DO NOT HAVE SAME SIGN");
    }
    return 0;
}

