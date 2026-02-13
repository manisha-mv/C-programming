#include <stdio.h>


void factorial(int num){

    int fact = 1;

    for(int i = num;i>=1;i--){
        fact = fact * i;
    }
    printf("Factorial = %d",fact);

}

int main(){

    int num ;
    scanf("%d",&num);
    factorial(num);

    return 0 ;
}