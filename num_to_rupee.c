#include <stdio.h>

int main(){

    int num, rem, quo;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    rem = num % 100;
    quo = num / 100;

    printf("NUMBER OF 100 RUPEE NOTES = %d\n", quo);

    if (rem > 50){

        
        printf("NUMBER OF 50 RUPEE NOTES is 1\n", quo);

        rem = rem % 50;

        quo = rem / 10;
        printf("NUMBER OF 10 RUPEE NOTES = %d", quo);



    }

    else{

        printf("NUMBER OF 50 RUPEE NOTES IS 0\n");
        quo = rem / 10;
        printf("NUMBER OF 10 RUPEE NOTES = %d", quo);
    }
}

