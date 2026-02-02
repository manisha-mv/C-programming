#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<size;j++){
        if(arr[j]<0){
        arr[j]=0;
    }
    }
    for(int k = 0;k<size;k++){
         printf("%d ",arr[k]);
    }
    return 0;
}