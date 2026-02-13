#include <stdio.h>

void perfect_num(int num){

    int sum = 0;
    int original = num;

    for(int i = 1;i<num;i++){
        if(num%i==0){
            sum= sum + i;
        }
    }
    //  printf("Sum = %d",sum);

    if(original==sum){
        printf("%d is a Perfect NUmber",num);
    }
    else{
        printf("%d is Not a Perfect Number ",num);
    }


    
}

int main(){
    int num;
    scanf("%d",&num);

    perfect_num(num);

    return 0 ;
}