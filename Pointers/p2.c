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
    int max = p[0];
    for(int i = 0;i<size;i++){
        if(max<p[i]){
            max = p[i];
            // break;
        }
    }
    printf("Maximum = %d",max);
    return 0 ;
}