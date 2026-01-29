#include <stdio.h>
#include <math.h>


int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int d;
    int original = n;
    
    for(;n>0;n =n/10){
        d = n%10;
        sum = sum +pow(d,3);
    }
    // printf("%d",sum);
    
    if (sum ==original){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}