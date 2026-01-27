#include <stdio.h>

int main(){
    int mark;
    scanf("%d",&mark);
    int atten;
    scanf("%d",&atten);

    if(atten>75){
        if(mark>=75){
            printf("distinction");
        }
        else if(mark>=50 && mark<=74){
            printf("Pass");
        }
        else if(mark<50){
            printf("Fail");
        }
    }
    else {
        printf("fail");
    }
    return 0;
}