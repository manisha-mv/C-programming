#include <stdio.h>

int main(){
    int i = 0;
    int n ;
    scanf("%d",&n);
    int balance;
    scanf("%d",&balance);
    int transfer_amt;
    int count = 0;
    int fb;
    int sum =0;
    int res;
    int sum1 =0;
    int final;
    // int current ;
    while(i<n){
        scanf("%d",&transfer_amt);
        if(transfer_amt<0){
        sum = sum + transfer_amt;
          final = balance +transfer_amt;
          if(final<2000){
              count++;
            //   current;
          }
        // fb = balance+sum;
        }else{
           sum1 = sum1+transfer_amt;
        }
        i++;
        res = sum +sum1+balance;
    }
    printf("final Balance : %d\n",res);
    // printf(" Final Balance : %d",fb);
    printf("Low balance Days = %d",count);
    return 0;
}
