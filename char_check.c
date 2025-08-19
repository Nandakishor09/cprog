#include <stdio.h>
#include <ctype.h>

int main(){

    char cha;
    printf("ENTER A CHARACTER:");
    scanf("%c", &cha);

    if(isdigit(cha)){
        printf("digit");
    }

    else if(isalpha(cha)){
            if( cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U'){

                if( isupper(cha) ){
                    printf("vowel and uppercase");
                }
                else{
                    printf("vowel and lowercase");
                }
            }

            else{

                if(isupper(cha)){
                    printf("consonant and uppercase");
                }
                else{
                    printf("consonant and lowercase");
                }
            }

    }


    else{
        printf("special character");
    }
}


