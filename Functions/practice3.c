#include <stdio.h>

void find(int size,int arr[],int search){

    int found =0;

    for(int i = 0;i<size;i++){
        if(search==arr[i]){
            found = 1;
        }
    }
    if(found){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
}

int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : ");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int search;
    printf("Enter the search element : ");
    scanf("%d",&search);
    find(size,arr,search);

    return 0;

}