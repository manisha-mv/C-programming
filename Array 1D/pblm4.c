#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = size-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}