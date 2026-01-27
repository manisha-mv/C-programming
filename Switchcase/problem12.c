#include <stdio.h>

int main(){
    int v_type;
    scanf("%d",&v_type);
    int trips;
    scanf("%d",&trips);

    switch(v_type){
        case 1:
        if(trips==1){
            printf("100");
        }
        else if(trips>=2 && trips<=10){
            printf("800");
        }
        else if(trips>10){
            printf("No discount or pass available");
        }
        break;
        case 2:
        printf("Eack trips 240");   
        break;
    }
}