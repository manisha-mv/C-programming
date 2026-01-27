#include <stdio.h>

int main(){
    int Ac_type;
    scanf("%d",&Ac_type);
    int years;
    scanf("%d",&years);

    switch(Ac_type){
        case 1:
        printf("Interest 4%%");
        break;
        case 2:
        if(years<=3){
            printf("Interest 5%%");
        }
        else if(years>3){
            printf("Interest 7%%");
        }
        break;
    }
    return 0;
}