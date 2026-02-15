#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("ENter the array elemnts: \n");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the starting pointer : \n");
    scanf("%d",&index);
    int *p = arr;
    for(int i = index;i<size;i++){
        printf("%d\n",(*p+i));
    }
    return 0 ;
}