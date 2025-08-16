#include <stdio.h>

int main(){

    float bill, extra;
    int units;
    printf("ENTER ELECTRICITY UNITS: ");
    scanf("%d", &units);


    if (units <= 50){
        bill = units * 0.50;

    }
    else if (units <= 150){
        units = units - 50;
        bill = (50 * 0.50) + (units * 0.75);

    }
    else{
        units = units - 150;
        bill = (50 * 0.50) + (100 * 0.75) + (units * 1.20);

    }

    extra = 0.20 * bill;
    bill = bill + extra;


    printf("TOTAL BILL WITH 20 PERCENT SURCHARGE: %f",bill);

    return 0;

}
