#include <stdio.h>

int main(){

    int birth_year, present_year, age;

    printf("ENTER YOUR DATE OF BIRTH: ");
    scanf("%d", &birth_year);

    printf("ENTER PRESENT YEAR: ");
    scanf("%d", &present_year);

    age = present_year - birth_year;

    printf("YOUR AGE = %d", age);
    return 0;
}
