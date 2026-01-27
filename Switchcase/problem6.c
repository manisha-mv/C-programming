#include <stdio.h>

int main(){
    int order_amt;
    scanf("%d",&order_amt);
    int order_type;
    scanf("%d",&order_type);
    switch(order_type){
        case 1:
        printf("50");
        break;
        case 2:
        if(order_amt<=1000 ){
            printf("Delivery amt 100");
        }
        else if(order_amt>=1000){
            printf("Delivery amt free");
        }
        break;
    }
    return 0;
}