#include <stdio.h>

int main(){

    float imdb;
    printf("ENTER THE IMDB RATING OF THE MOVIE: ");
    scanf("%f", &imdb);

    if( imdb >= 9.0){
        printf("MUST WATCH");
    }
    else if( imdb >= 7.0){
        printf("GOOD MOVIE");
    }
    else if( imdb >= 5.0){
        printf("AVERAGE");
    }
    else{
        printf("SKIP");
    }
    return 0;

}
