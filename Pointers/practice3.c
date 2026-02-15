#include <stdio.h>

void even(int arr[],int size){
    int *p = arr;
    for(int i = 0;i<size;i++){
        if(i%2==0){
            *(p +i)*=2;
        }
    }
    for(int i = 0;i<size;i++){
        printf("%d\n",*(p+i));
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the size of the array : \n");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    even(arr,size);
    return 0 ;
}