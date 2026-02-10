#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row : ");
    scanf("%d",&r);

    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of an array : \n");
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        int count = 0;
            for(int i = 0;i<r;i++){
                int rowmin = arr[i][0];
                int col = 0;

            for(int j = 1;j<c;j++){
                if(arr[i][j]<rowmin){
                    rowmin = arr[i][j];
                    col= j;
                }
            }
                int found = 1;
            for(int k = 0;k<r;k++){
                if(arr[k][col]>rowmin){
                    int found = 0;
                    break;
                }
            }
            // int count = 0;
            if(found){
                count++;
                break;
            }
        }
        printf("saddle point count = %d",count);
        return 0 ;
    }