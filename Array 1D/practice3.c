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
        sum = sum+arr[j];
    }
    int max = arr[0];
    for(int k = 0;k<size;k++){
        if(arr[k]>max){
            max = arr[k];
        }
    }
    printf("Total votes counts : %d\n",sum);
    printf("HIghest vote counts : %d ",max);
}