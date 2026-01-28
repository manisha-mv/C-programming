#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ld;
    int sum =0;

    while(n!=0){
        ld = n%10;
        sum = sum+ld;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}