#include <stdio.h>

int main(){

    int age, price, day;
    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);
    printf("ENTER THE DAY OF MOVIE FOR ORDERS(1-7 WHERE 1 STANDS FOR SUNDAY): ");
    scanf("%d", &day);

    if( day == 4){
        if ( age < 12){
            price = 100;
            printf("YOUR TICKET PRICE: %d", price - 20);
        }
        else if( age >= 12 && age <= 60){
            price = 150;
            printf("YOUR TICKET PRICE: %d", price - 30);
        }
        else{
            price = 120;
            printf("YOUR TICKET PRICE: %d", price - 24);
        }

    }
    else{
        if ( age < 12){
            price = 100;
            printf("YOUR TICKET PRICE: %d", price);
        }
        else if( age >= 12 && age <= 60){
            price = 150;
            printf("YOUR TICKET PRICE: %d", price);
        }
        else{
            price = 120;
            printf("YOUR TICKET PRICE: %d", price);
        }

    }
    return 0;

}
