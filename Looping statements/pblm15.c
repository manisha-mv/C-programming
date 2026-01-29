#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count;
    int primecount = 0;
    int d;

    for(int i =1;i<=n;i++){
        count = 0;
        for(int j =1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == 2){
            primecount++;
        }
    }
    printf("%d",primecount);
    return 0;
}