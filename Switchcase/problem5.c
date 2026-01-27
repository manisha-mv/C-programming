#include <stdio.h>

int main(){
    int plan_type;
    scanf("%d",&plan_type);
    int pay_mode;
    scanf("%d",&pay_mode);

    switch(plan_type){
        case 1:
        if(pay_mode==11 || pay_mode==12){
            int cb = 199-20;
            printf("%d",cb);
        }
        else if(pay_mode==13){
            printf("No cashback");
        }
        else {
            printf("₹199");
        }
        break;
        case 2:
        if(pay_mode==11 || pay_mode==12){
            int cb = 199-20;
            printf("%d",cb);
        }
        else if(pay_mode==13){
            printf("No cashback");
        }
        else {
            printf("₹399");
        }
        break;
    }
    return 0;
}