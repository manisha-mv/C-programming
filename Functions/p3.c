#include <stdio.h>

void check_even(int number){
     
    if(number == 0){
        printf("Even");
    }
    else if(number%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}

int main(){
    int number;
    scanf("%d",&number);

    check_even(number);
    return 0;
}