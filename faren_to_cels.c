#include <stdio.h>

int main(){

    float cels, faren;
    printf("ENTER THE TEMPERATURE IN FARENHEIT: ");
    scanf("%f", &faren);

    cels = (faren - 32) * 5/9;


    if (cels < 20){
        printf("COOL");
    }
    else if(cels >= 20 && cels < 30){
        printf("MEDIUM");
    }
    else{
        printf("HOT");
    }
    return 0;

}
