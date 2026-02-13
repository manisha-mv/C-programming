#include <stdio.h>


void palindrome(int num,int original){

    // original = num;
    int digit,reverse = 0;

    while(num!=0){
        digit = num%10;
        reverse = (reverse * 10)+digit;
        num = num/10;
    }

    if(original==reverse){
        printf("Palindrome");
    }
    else{
        printf("NOt a Palindrome");
    }

}

int main(){
    int num;
    scanf("%d",&num);
    int original = num;

    palindrome(num,original);

    return 0 ;
}