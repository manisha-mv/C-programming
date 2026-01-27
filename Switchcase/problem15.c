#include <stdio.h>

int main(){
    int c_mode;
    scanf("%d",&c_mode);
    char s_category;
    scanf(" %c",&s_category);

    switch(c_mode){
        case 1:
        if(s_category=='R'){
            printf("5000");
        }
        else if(s_category=='S'){
            printf("3000");
        }
        break;
        case 2:
        if(s_category=='R'){
            printf("9000");
        }
        else if(s_category=='S'){
            printf("7000");
        }
        break;
    }
    return 0;
}