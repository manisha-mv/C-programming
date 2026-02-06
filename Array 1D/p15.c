#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int z = 0;   

    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            arr[z] = arr[i];
            z++;
        }
    }

    for(int i = z; i < size; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
