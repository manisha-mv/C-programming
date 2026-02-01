#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int streak,max=0;
    int i =0;
    int count = 0;
    while(i<n){
        scanf("%d",&streak);
        
        if(streak==0){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count = 0;
        }
        i++;
    }
    printf("Longest Failure Streak : %d",max);
    return 0;
}