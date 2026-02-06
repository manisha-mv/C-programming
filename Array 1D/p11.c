#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    int total = 0;
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
        total = total + arr[i];
    }

    if(size==1){
        printf("0");
        return 0;
    }

    int left_sum = 0;
    // int total ;

    for(int i = 0;i<size;i++){
        if(left_sum==total-left_sum-arr[i]){
            printf("%d",i);
            return 0 ;
        }
        left_sum = left_sum+arr[i];
    }
    printf("-1");
    return 0 ;
}