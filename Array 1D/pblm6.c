#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int j = 0;  

    for(int i = 1; i < size; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }

    for(int i = 0; i <= j; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
