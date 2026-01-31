#include <stdio.h>

int main(){
    int n;
    int balance;
    int transfer;
    int count =0;
    int i ;

    scanf("%d",&n);
    scanf("%d",&balance);
    
    while(i<n){
        balance = balance+transfer;

        if(balance<2000){
            count++;
        }
        i++;
    }
    printf("Final Balance : %d",balance);
    printf("Low Balance days: %d",count);
    return 0;
}