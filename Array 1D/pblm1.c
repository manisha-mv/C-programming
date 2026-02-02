#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int max1 = arr[0];
    for(int i =1;i<size;i++){
        if(arr[i]>max1){
            max1 = arr[i];
        }
    }
    int max2 = -1;
    for(int i = 0;i<size;i++){
        if(arr[i]!=max1 && arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("First Largest: %d\n",max1);
    printf("second Largest : %d",max2);
    return 0;
}