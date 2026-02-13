#include <stdio.h>


void count_digit(int num){

    int sum = 0;
    int digit;

    while(num!=0){

        digit = num%10;
        sum+=digit;
          num = num/10;
    }

    printf(" sum of Digit : %d",sum);
}

int main(){
    int num;
    scanf("%d",&num);
    count_digit(num);
    // printf("%d",result);
    return 0 ;
}