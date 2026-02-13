#include <stdio.h>

void power(int n,int pow){
    
    // int pr = 1;
    int result =1;
    // int i;
    
    for(int i = 1;i<=pow;i++){
        result = result*n;
    }

    // while(i<=pow){
    //       power = i;
    // }
    printf("%d",power);

}

int main(){
    int n;
    scanf("%d",&n);

    int pow;
    scanf("%d",&pow);

    power(n,pow);

    return 0 ;
}