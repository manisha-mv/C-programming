#include <stdio.h>

int main(){
    int Ac_type;
    scanf("%d",&Ac_type);
    int balance;
    scanf("%d",&balance);
    int widr_amt;
    scanf("%d",&widr_amt);

    switch(Ac_type){
        case 1:
        if(balance>=widr_amt){
            if(widr_amt>5000){
                printf("Limit Exceeded");
            }
            else {
                printf("Transaction Succesfull");
            }
        }
        break;
        case 2:
         if(widr_amt>5000){
            printf("Limit Exceeded");
         }
         else {
            printf("Transaction successfull");
         }
         break;
    }
    return 0;
}