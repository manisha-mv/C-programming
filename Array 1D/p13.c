#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int j = 0;j<size;j++){
        sum = sum + arr[j];
    }

    int avg ;
    int count =0;
    for(int k = 0;k<size;k++){
        avg = sum/size;
        if(arr[k]>avg){
            count++;
        }
    }
    printf("Above Average Count : %d",count);
    return 0 ;
}