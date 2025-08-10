#include <stdio.h>


int main(){

    int time, principal;
    float interest;
    printf("ENTER THE PRINCIPLE AMOUNT: ");
    scanf("%d", &principal);
    printf("ENTER THE RATE OF INTEREST IN DECIMAL(ex: 0.05): ");
    scanf("%f", &interest);
    printf("ENTER THE TIME PERIOD IN YEARS: ");
    scanf("%d", &time);

    float simple_interest = principal * interest * time;
    float compound = principal * pow((1 + interest), time);
    float compound_interest = compound - principal;

    printf("SIMPLE INTEREST FOR THE GIVEN PRINCIPLE IS %f\n", simple_interest);
    printf("COMPOUND INTEREST FOR THE GIVE PRINCEPLE IS %f", compound_interest);
    return 0;
}
