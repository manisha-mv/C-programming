#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of array : ");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max1 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(max1<arr[i][j]){
                max1 = arr[i][j];
            }
        }
    }
    int max2 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(max2<arr[i][j] && max1!=arr[i][j]){
                max2= arr[i][j];
            }
        }
    }
    printf("Second Largest : %d ",max2);
    return 0 ;
}