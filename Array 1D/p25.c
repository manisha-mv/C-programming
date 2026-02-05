#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max1 = -1;
    int max2 = -1;

    for(int i = 0;i<size;i++){
        if(arr[i]>=0){
            if(max1<arr[i]){
                max1 = arr[i];
            }
        }
    }
    for(int i =0;i<size;i++){
        if(arr[i]>=0 && arr[i]!=max1 && max2<arr[i]){
            max2 = arr[i];
        }
    }

    int min1 = -1;
    int min2 = -1;

    for(int i = 0;i<size;i++){
        if(arr[i]<0 && arr[i]<min1){
            min1 = arr[i];
        }
    }
    for(int i = 0;i<size;i++){
        if(arr[i]<0 && arr[i]!= min1 && arr[i]<min2){
            min2 = arr[i];
        }
    }

    int negative_pr = min1*min2;
    int positive_pr = max1*max2;

    if(negative_pr>positive_pr){
       printf("negative = %d\n",min1*min2); 
    }
    else if(negative_pr<positive_pr){
        printf("positive = %d\n",max1*max2);
    }
    else{
        printf("positive = %d\n",max1*max2);
    }
    // printf("max1 = %d\n",max1);
    // printf("max2 = %d\n",max2)a;
    return 0 ;
}