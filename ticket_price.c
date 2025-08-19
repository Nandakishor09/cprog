#include <stdio.h>

int main(){

    int age, price, day;
    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);
    printf("ENTER THE DAY OF MOVIE FOR ORDERS(1-7 WHERE 1 STANDS FOR SUNDAY): ");
    scanf("%d", &day);

    if (age < 12){
        price = 100;
    }
    else if (age >=12 && age <60){
        price = 150;
    }
    else{
        price = 120;
    }
    if (day == 4){
        price = price - 20;
    }
    printf("your ticket price: %d", price);
    return 0;

    
    return 0;

}

