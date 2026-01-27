#include <stdio.h>

int main(){
    int connection_type;
    scanf("%d",&connection_type);
    int units;
    scanf("%d",&units);

    switch(connection_type){
        case 1:
        if(units<=100){
            printf("%d",units*3);
        }
        else if(units>100 && units<=200){
            printf("%d",units*5);
        }
        else if (units>200){
            printf("%d",units*7);
        }
        break;
        case 2:
        if(units<=100){
            printf("%d",units*7);
        }
        else if(units>100){
            printf("%d",units*10);
        }
        break;
    }
    return 0;
}