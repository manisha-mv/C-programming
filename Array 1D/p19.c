#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<size;i++){
         int dul = 0;
        for(int j =i+1;j<size;j++){
            if(arr[i]==arr[j]){
                dul = 1;
                break;
            }
        }
        if(dul == 0){
            // printf("%d \n",arr[i]);
            count++;
        }
    }
    printf(" %d count",count);
    return 0 ;
    }