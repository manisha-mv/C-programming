#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row:");
    scanf("%d",&r);

    printf("Enter the col: ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter value of the array : \n");
    for(int i =0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int min = 1000000;
    // int count = 0;
    int row = 0;
    for(int i = 0;i<r;i++){
        int sum = 0;
        // int sum_zero = 1;
        for(int j = 0;j<c;j++){
            sum = sum +arr[i][j];
            // sum_zero =0;
        }
        if(sum==0){
            continue;
        }
        else if(sum<min ){
            min = sum;
            row= i;
    }
        
 }
 printf("count = %d",row);
  return 0;
}