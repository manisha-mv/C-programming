#include <stdio.h>

// sum of even numbers

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;

    for(int i = 1 ;i<=n;i++){
        if(i%2==0){
            sum = sum+i;
        }
    }
    printf("%d ",sum);
    
    return 0;
}