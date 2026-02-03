#include <stdio.h>

int main(){
    int fuel;
    int n;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int stage;
    int i = 0;
    int sum = 0;
    int wasted;
    int at_count =0;
    int attempt_count =-1;

    while(i<n){
        scanf("%d",&stage);
        sum = sum +stage;
     if(at_count>sum && attempt_count ==-1){
            attempt_count = i+1;
     }else{
        at_count=0;
     }
    i++;
}

        if(attempt_count==-1){
            printf("Emergency count : not Occured\n");
        }
        else{
            printf("Emergency count : %d",attempt_count);
        }
        printf("Fuel wasted : %d",sum-fuel);
        return 0 ;
}