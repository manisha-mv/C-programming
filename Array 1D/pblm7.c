#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count_even = 0;
    int count_odd = 0;
    for(int j =0;j<size;j++){
        if(arr[j]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("Even COunt : %d\n",count_even);
    printf("Odd count : %d",count_odd);
}