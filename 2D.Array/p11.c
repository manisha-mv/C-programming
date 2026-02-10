#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row: ");
    scanf("%d",&r);

    printf("Enter the col : ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter the array values : ");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i<r;i++){
        int order = 1;
        for(int j =0;j<c-1;j++){
            if(arr[i][j]>arr[i][j+1] || arr[i][j]==arr[i][j+1]){
                order = 0;
                break;
            }
        }
        
    if(order==1){
        count++;
    }
    }
    printf("%d count ",count);
    return 0 ;
}