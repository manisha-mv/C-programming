#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int d;
    int sum =0;
    int value = n;

    for(;n!=0 ;n= n/10){
        d = n%10;
        int fact =1;
        for(int i = d;i>=1;i--){
            fact = fact*i;
        }
        sum = sum +fact;
    }
    if(sum == value){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
