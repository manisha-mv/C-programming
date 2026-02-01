#include <stdio.h>

int main(){
    int balance, n;
    scanf("%d", &balance);
    scanf("%d", &n);

    int i = 0, cost;
    int success = 0;

    while(i < n){
        scanf("%d", &cost);

        if(balance >= cost){
            balance = balance - cost;
            success++;
        }else{
            break;
        }
        i++;
    }

    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d", balance);

    return 0;
}
