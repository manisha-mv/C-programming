#include <stdio.h>

int main(){
    int class;
    scanf("%d",&class);
    int baggage;
    scanf("%d",&baggage);

    switch(class){
        case 1:
        printf("%d",300*baggage);
        break;
        case 2:
        if(baggage<=3){
            printf("Free,No charge");
        }
        else{
            printf("%d",(baggage-3)*300);
        }
        break;
    }
    return 0;
}