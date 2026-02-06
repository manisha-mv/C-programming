#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int last = arr[size-1];
    printf("%d ",last);

    for(int i = size -1;i>0;i--){
        if(last<arr[i]){
            last = arr[i];
            printf("%d ",last);
        }
    }
    // for(int i = 0;i<size;i++){
    //     if(arr[i]<last){
    //         printf("%d",arr[i]);
    //     }
    // }

}