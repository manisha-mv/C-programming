#include <stdio.h>

int  main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min =-1;
    for(int j = 0;j<size;j++){
        if(arr[j]>0){
            if(min==-1 || min>arr[j]){
                min = arr[j];
                // found = 1;
                // return 0;
            }
        }
    }
    if(min==-1){
        printf("NO positive");
    }
    else{
        printf("minimun value : %d",min);
    }
    return 0 ;
}