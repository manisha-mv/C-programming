#include <stdio.h>
int main(){
    int wheeler;
    scanf("%d",&wheeler);
    int age;
    scanf("%d",&age);

    switch(wheeler){
        case 1:
        if(age<=5){
            printf("1500");
        }
        else if(age>5){
            printf("2500");
        }
        break;
        case 2:
        if(age<=5){
            printf("4000");
        }
        else if(age>5){
            printf("6000");
        }
        break;
    }
    return 0;
}