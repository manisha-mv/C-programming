#include <stdio.h>

int  power(int base,int expo){

    if(expo==0){
        return 1;
    }

    return base*power(base,expo-1);
    
}

int main(){
    int base;
    scanf("%d",&base);
    int expo;
    scanf("%d",&expo);

    int c = power(base,expo);

    printf("total = %d",c);

    return 0 ;
    
}