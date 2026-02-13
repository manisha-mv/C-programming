#include <stdio.h>
#include <math.h>


void armstrong(int num){

    int sum = 0;
    int digit;

    int original = num;

    while(num!=0){
        digit = num%10;
        sum = sum + digit*digit*digit;
        // sum = sum+mul;
        num = num/10;
    }

    // printf("armstrong = %d",sum);
    if(sum == original){
        printf("Armstrong number  ");
    }
    else{
        printf("Not a Armstrong number");
    }
}

int main(){
    int num;
    scanf("%d",&num);

    armstrong(num);

    return 0 ;
}