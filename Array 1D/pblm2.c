#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the mark : ");
    scanf("%d",&num);
    int count =0;
    for(int j =0;j<size;j++){
        if(arr[j]==num){
            count++;
        }
    }
    printf("count of the marks is  %d",count);
    return 0;
}