#include <stdio.h>

int main(){
    int v_type;
    scanf("%d",&v_type);
    int hour;
    scanf("%d",&hour);

    switch(v_type){
        case 1:
        printf("Parking fee is %d",hour*10);
        break;
        case 2:
        if(hour>=1 && hour<=24){
        printf("Parking fee is %d",hour*20);
    }
        break;
        default:printf("%d",hour*20);
    }
    return 0;
}