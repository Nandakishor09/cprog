#include <stdio.h>

int main(){

    int balance, withdraw_amount, out, left, out_100;
    printf("Enter account balance amount: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw_amount);

    if ( balance < 1000){
        out = withdraw_amount / 100;
        balance = balance - withdraw_amount;
        printf("Withdrawal amount(100s): %d\n", out);
        printf("Account balance: %d\n", balance);
    }
    else{
        out = withdraw_amount / 500;
        left = withdraw_amount - (500 * out);
        out_100 = left / 100;
        balance = balance - withdraw_amount;

        printf("Withdrawal amount(500s): %d\n", out);
        printf("Withdrawal amount(100s): %d\n", out_100);
        printf("Account balance: %d\n", balance);


    }
    return 0;
}
