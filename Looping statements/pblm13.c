#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    int limit;
    scanf("%d",&limit);
    int sum = 0;

    for(int i =0;i <= limit;i++){
        if(i % m == 0){
            sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}
