#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum ;
    printf("Give sum : ");
    scanf("%d",&sum);
    int found =0;

    for(int i = 0 ;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d ",arr[i],arr[j]);
                found = 1;
                return 0;
            }
        }
    }
    if(found==0){
        printf("NO Pair");
    }
    return 0;
}