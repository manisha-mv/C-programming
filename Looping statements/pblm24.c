#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int d;
    int sum =0;
    int original = n;

    for(;n>0;n = n/10){
        d = n%10;
        sum = sum *10+d;
    }
    if(original==sum){
        printf("YES");
    }
    else{
        printf("NOT");
    }
    return 0;
}