#include <stdio.h>

int main(){
    int loan_type;
    scanf("%d",&loan_type);
    int score;
    scanf("%d",&score);

    switch(loan_type){
        case 1:
        if(score>=700){
            printf("Approved");
        }
        else if(score>=650 && score<=699){
            printf("manual view");
        }
        break;
        case 2:
        if(score>=700){
            printf("Approved");
        }
        else if(score<700){
            printf("Rejected");
        }
        break;
    }
    return 0;
}