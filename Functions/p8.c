#include <stdio.h>

int reverse(int num){

    int digit ,reverse = 0;

    while(num!=0){
        digit = num%10;
        reverse = (reverse*10)+digit;
        num = num/10;
    }
     return reverse;
}



int main(){
    int num;
    scanf("%d",&num);

    int result = reverse(num);
    printf("reverse  = %d",result);

    return 0 ;
}