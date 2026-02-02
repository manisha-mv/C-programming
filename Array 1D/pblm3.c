#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int j =0;j<size;j++){
        if(max >arr[j]){
            max = 0;
        }
        else{
            max = 1;
        }
    }
    if(max == 0){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}