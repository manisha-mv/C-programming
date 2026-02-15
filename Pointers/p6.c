#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    printf("ENter the array elements : \n");

    int *p = arr;
    for(int i = 0 ;i<size;i++){
        scanf("%d",&p[i]);
    }
    for(int i = size-1;i>=0;i--){
        printf("%d ",p[i]);
    }
    return 0 ;
}