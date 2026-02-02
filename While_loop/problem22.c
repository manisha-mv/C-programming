#include <stdio.h>

int main(){
    int n ;
    int attempt;
    int i =0;
    int count_failed =0;
    int triger_count =0;
    int attempt_count =-1;

    scanf("%d",&n);

    while(i<n){
        scanf("%d",&attempt);
         if(attempt==0){
            count_failed++;
            triger_count++;
            if(triger_count==3 && attempt_count==-1){
            attempt_count= i+1;
            }
        }
            else {
                triger_count = 0;
        }
        i++;
    }
    if(attempt_count==-1){
        printf("Lock Triggered At attempt : Not Locked\n");
    }
    else{
    printf("Lock triggered At Attempt : %d\n",attempt_count);
    }
    printf("Total Failed Attempt : %d",count_failed);
    return 0;
}