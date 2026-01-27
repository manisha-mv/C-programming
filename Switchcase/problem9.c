#include <stdio.h>

int main (){
    int room_type;
    scanf("%d",&room_type);
    char season;
    scanf(" %c",&season);

    switch(room_type){
        case 1:
        if(season=='A'){
            printf("2500");
        }
        else if(season=='B'){
            printf("2000");
        }
        break;
        case 2:
        if(season=='C'){
            printf("4000");
        }
        else if(season=='D'){
            printf("3000");
        }
        break;
    }
    return 0;
}