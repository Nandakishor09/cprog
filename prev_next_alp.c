#include <stdio.h>
#include <ctype.h>

void main(){

    char letter;
    int value,previous, next;
    printf("Enter a character(a to z) in lower case: ");
    scanf("%c", &letter);

    value = (int)letter;

    if (value == 97){
        next = value + 1;
        previous = 122;
    }
    else if (value == 122){
        previous = value - 1;
        next = 97;
    }
    else{
        previous = value - 1;
        next = value + 1;
    }

    printf("NEXT LETTER: %c", (char)next);
    printf("\nPrevious letter: %c", (char)previous);

}

