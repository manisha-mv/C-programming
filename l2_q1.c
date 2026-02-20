// LCM of two NUmber

#include <stdio.h>

int main(){
    int  num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);

    int x = num1;
    int y = num2;

    int temp ;
    while(y!=0){
        temp = y;
        y = x%y;
        x = temp ;
    }
    printf("GCD = %d\n",x);
    int lcm = num1*num2/x;
    printf("LCM = %d",lcm);
    return 0 ;
}