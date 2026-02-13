#include <stdio.h>

void check_prime(int num){

    if(num<=1){
        printf("Not Prime Eligible");
        // break;
    }
     int prime = 1;
    for(int i = 2;i<num;i++){
        if(num%i==0){
            prime = 0;
        }
    }
    if(prime==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}

int main(){

    int num;
    scanf("%d",&num);

    // if check_prime(num){
    //         printf("Prime");
    // }
    // else{
    //     printf("Not prime");
    // }

    check_prime(num);

    return 0 ;
}