#include <stdio.h>

void multiply(int num){

    for(int i = 1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }

}

int main(){

    int num;
    scanf("%d",&num);

    multiply(num);

    return 0 ;
}