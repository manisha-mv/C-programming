#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row: ");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of an array : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]>200){
                count++;
            }
        }
    }
    printf("Bright Pixels : %d",count);
    return 0 ;
}