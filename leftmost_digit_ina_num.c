/*#include <stdio.h>

int main(){

    int num, num1;



    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    num1 = num;
    if ( num >= 0 && num <=9){

        printf("Ones place\n");
    }
    else if( num >= 10 && num <= 99){
        num = num/10;
        printf("Tens place\n");
    }
    else if( num >= 100 && num <= 999){
        num = num/100;
        printf("Hundreds place\n");
    }
    else if( num >= 1000 && num <= 9999){
        num = num/1000;
        printf("Thousands place\n");
    }
    else if( num >= 10000 && num <= 99999){
        num = num/10000;
        printf("Ten-thousands place\n");
    }
    else{
        printf("Invalid input");
    }
    if( num1 <= 99999){
        printf("Left most digit: %d\n", num);
    }

}
*/

#include<stdio.h>
#include<conio.h>

int main()
{
int n;
printf("enter number : ");
scanf("%d",&n);

if(n>10000 && n<99999)
{
    n=n / 10000;
    printf("the leftmost digit is: %d \n",n);
    printf("tenthousands");
}
else if(n > 1000)
{
    n=n / 1000;
    printf("the leftmost digit is: %d \n",n);
    printf("thousands");
}
else if(n>100)
{
    n=n / 100;
    printf("the leftmost digit is: %d \n",n);
    printf("hundreds");
}
else if(n>10)
{
    n=n / 10;
    printf("the leftmost digit is: %d \n",n);
    printf("tens");
}
else
{
    printf("the leftmost digit is: %d \n",n);
    printf("ones");
}
    return 0;

}
