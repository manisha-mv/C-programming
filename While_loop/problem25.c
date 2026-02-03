#include <stdio.h>

int main(){
    int n ;
    int transaction ;
    int i = 0;
    int at_count =0;
    int attempt_count =-1;

    scanf("%d",&n);
    int high_transaction_count =0;
    while(i<n){
        scanf("%d",&transaction);

        if(transaction>=50000){
            high_transaction_count++;
            at_count++; 
        }
        if(at_count >=3 && attempt_count ==-1){
            attempt_count = i+1;
        }
        else{
        at_count =0;
    }
    i++;
}
    if(attempt_count ==-1){
        printf("Fraud Tirggered At Attempt : Not Triggered\n ");
    }
    else{
        printf("Fraud Triggered At Attempt : %d\n",attempt_count);
    }
    printf("High-Value Transaction : %d",high_transaction_count);
    return 0;
}