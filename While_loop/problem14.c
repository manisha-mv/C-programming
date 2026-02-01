#include <stdio.h>

int main(){
    int atm_cash, n;
    scanf("%d", &atm_cash);
    scanf("%d", &n);

    int i = 0;
    int withdraw;
    int successful = 0;

    while(i < n){
        scanf("%d", &withdraw);

        if(atm_cash >= withdraw){
            atm_cash = atm_cash - withdraw;
            successful++;
        }else{
            break;   
        i++;
    }

    printf("Successful Withdrawals: %d\n", successful);
    printf("Remaining Cash: %d", atm_cash);

    return 0;
}
