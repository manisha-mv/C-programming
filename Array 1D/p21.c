#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // int rep = 0;
    // int r = 0;
    for(int j = 0;j<size;j++){
        for(int i = j+1;i<size;i++){
            if(arr[j]==arr[i]){
                printf("Reapeat : %d",arr[j]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0 ;
}