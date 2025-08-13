#include <stdio.h>

int main(){

    int num, q, r;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    q = num / 10;
    r = num % 10;

    q = (q+1) % 10;
    r = (r+1) % 10;
    printf("%d%d", q,r);
    return 0;


}
