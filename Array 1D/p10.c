#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size],result[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int right= arr[size-1];
    result[size-1]=-1;
        // printf("%d ",right);

        for(int i =size-1;i>=0;i--){
            result[i]=right;
            if(arr[i]>right){
                right = arr[i];
                // arr[i]=last;
                // printf("%d ",arr[i]);
                // return last;
            }
        }
        for(int i =  0;i<size;i++){
            printf("%d",result[i]);
        }
        return 0 ;
}