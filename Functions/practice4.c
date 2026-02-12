#include <stdio.h>

void prime(int start,int end){
      int sum = 0;
    for(int i = start;i<end;i++){
        int fact = 0;
        for(int j= 1;j<=i;j++){
            if(i%j==0){
                fact++;
            }
        }
        if(fact==2){
            sum = sum + i;
        }

    }
    printf("%d\n",sum);
    // return 0 ;
}

int main(){
    int start;
    printf("Enter start : ");
    scanf("%d",&start);
    int end;
    printf("Enter End : ");
    scanf("%d",&end);

    prime(start,end);
    
    return 0 ;  
}