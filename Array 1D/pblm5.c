#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size-1];

    for(int i = 0;i<size-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int j =0;j<size-1;j++){
        sum = sum + arr[j];
    }

    int total = size*(size+1)/2;
    int missing  = total- sum;

    printf("Missing number : %d",missing);
    return 0;
}