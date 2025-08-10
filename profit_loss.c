#include <stdio.h>

int main(){

    int sp, cp;
    printf("ENTER SELL PRICE: ");
    scanf("%d", &sp);
    printf("ENTER COST PRICE: ");
    scanf("%d", &cp);

    if (sp > cp){
        printf("PROFIT IS %d", sp - cp);
    }
    else if( cp > sp){
        printf("LOSS IS %d", cp - sp);
    }
    else{

        printf("NO PROFIT OR LOSS");
    }
    return 0;



}

