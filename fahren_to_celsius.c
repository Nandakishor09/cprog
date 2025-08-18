#include <stdio.h>
int main(){

    int age;
    char name[20];

    printf("ENER YOUR AGE: ");
    scanf("%d", &age);

    printf("ENTER YOUR NAME: ");
    scanf("%s", &name);

    printf("YOUR AGE = %d\n", age);
    printf("YOUR NAME = %s", name);

    return 0;

}
