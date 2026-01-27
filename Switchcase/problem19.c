#include <stdio.h>

int main(){
    int cate;
    scanf("%d",&cate);
    int dis;
    scanf("%d",&dis);

    switch(cate){
        case 1:
        
        if(dis<=30){
            printf("Eligible");
        }
        else if(dis>30){
            printf("Not Eligible");
        }
        break;
        case 2:

        if(dis<=30){
            printf("Eligible");
        }
        else if(dis>30){
            printf("Not eligible");
         }
        break;
    }
    return 0;
}