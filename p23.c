#include <stdio.h>
#include <stdlib.h> 
 
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }
     int close = arr[0];
    for(int i = 1;i<size;i++){
        if(abs(arr[i])<abs(close)){
            close = arr[i];
        }
        else if(abs(arr[i]==abs(close) && arr[i]>close)){
            close = arr[i];
        }
    }
    printf("Closest = %d ",close);
    return 0 ;
}

