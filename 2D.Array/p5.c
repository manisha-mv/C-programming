#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row: ");
    scanf("%d",&r);

    printf("Enter the col : ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    int row =0;
    int minavg =10000000000;

    for(int i = 0;i<r;i++){
        int sum = 0;
        
        for(int j = 0;j<c;j++){
           sum = sum+arr[i][j]; 
        }

         int avg = sum/c;

         if(avg<minavg){
            minavg = avg;
            row = i;
        }
    }

    printf("min avg %d",row);
    return 0 ;
}