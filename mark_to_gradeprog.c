#include <stdio.h>

int main(){

    int mark;
    printf("ENTER YOUR MARK: ");
    scanf("%d", &mark);

    if (mark >= 90){
        printf("A GRADE");
    }
    else if( mark >= 80 && mark <=89 ){
        printf("B GRADE");
    }
    else if( mark >= 70 && mark <= 79){
        printf("C GRADE");
    }
    else if( mark >= 60 && mark <= 69){
        printf("D GRADE");
    }
    else{
        printf("F GRADE");
    }
    return 0;
}
