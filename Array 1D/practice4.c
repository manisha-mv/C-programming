#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i = 0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int j =0;j<size;j++){
        if(arr[j]<10 || arr[j]>100){
            count++;
        }
    }
    printf("Total counts : %d",count);
    return 0;
}