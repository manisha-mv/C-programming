#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<size;i++){
        int d = 0;
        for(int j = 0;j<i;j++){
            if(arr[i]==arr[j]){
                d =1;
                break;
            }
        }
        if(d==0){
        printf("%d",arr[i]);
    }
    }
    return 0 ;
}
