#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    int found = 0;
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
        for(int j = size;j>=0;j--){
            if(arr[j]!=arr[size-i-1]){
                found = 0;
            }
        }
    }
    if(found=1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0 ;
}