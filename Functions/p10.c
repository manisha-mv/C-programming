#include <stdio.h>

int sum(int num){
    int sum = 0;
    for(int i = 1;i<=num;i++){
        sum = sum +i;
    }
        return sum;
}

int main(){

    int num;
    scanf("%d",&num);

    int result = sum(num);
    printf("sum = %d",result);

    return 0 ;
}