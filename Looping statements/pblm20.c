#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    int sqt;


    for(int i =1;i<=n;i++){
        sqt = i*i;
        sum = sum+sqt;
    }
    printf("%d",sum);
    return 0;
}