#include <stdio.h>

int main(){


    float cels, faren;
    printf("ENTER THE TEMPERATURE IN FARENHEIT: ");
    scanf("%f", &faren);

    cels = (faren - 32) * 5/9;
    printf("GIVEN TEMPERATURE IN CELSIUS %f", cels);
    return 0;
}
