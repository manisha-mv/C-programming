#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int minprice = arr[0];
    int maxprice =-1;

    for(int i = 1;i<size;i++){
        if(minprice>arr[i]){
            minprice = arr[i];
        }
        else{
            int profit = arr[i]-minprice;
            if(profit>maxprice){
                maxprice = arr[i];
            }
        }
    }
    printf("MAximum = %d",maxprice);
    return 0 ;
}