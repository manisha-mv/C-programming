#include <stdio.h>

int main(){
    int role;
    scanf("%d",&role);
    int l_time;
    scanf("%d",l_time);

    switch(role){
        case 1:
        printf("Full Access Time");
        break;
        case 2:
        if(l_time>=9 && l_time<=18){
            printf("Limited Access");
        }
        else {
            printf("Access Denied");
        }
        break;
    }
    return 0;
}