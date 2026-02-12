#include <stdio.h>

int add(int a,int b){
    int c = a+b;
    int f = a-b;
    return c;
}

void odd(int a ,int b){
    printf("%d ",a+b);
}


int main(){
    int a = 10,b= 5;
    int k = add(a,b);

    int o = 10,l=2;
    // int c= add(o,l);
    // printf("C = %d\n",c);
    // printf("K = %d",k);
    odd(a,b);
    odd(o,l);
    return 0 ;
}