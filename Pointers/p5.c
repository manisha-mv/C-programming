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
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum + p[i];   
    }

    printf("Sum  = %d",sum);
    return 0 ;
}