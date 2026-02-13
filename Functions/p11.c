#include <stdio.h>


int count_digit(int num){
    int digit = 0;
    int count = 0;

    while(num!=0){
        digit = digit%10;
        count++;
        num = num/10;
    }

    return count;
}

int main(){

    int num;
    scanf("%d",&num);

    int result = count_digit(num);
    printf("Count of a Digit : %d",result);
    
    return 0 ;
}