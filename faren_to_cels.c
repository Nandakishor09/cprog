#include <stdio.h>

int main(){

    float temp;
    printf("ENTER THE TEMPERATURE: ");
    scanf("%f", &temp);


    if (temp > 80){
        temp = (temp - 32) * 5/9;
    }

    if (temp < 20){
        printf("COOL");
    }
    else if(temp >= 20 && temp < 30){
        printf("MEDIUM");
    }
    else{
        printf("HOT");
    }
    return 0;
}

