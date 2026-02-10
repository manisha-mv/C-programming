#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row:");
    scanf("%d",&r);

    printf("Enter the col: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the array values : ");

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int row = arr[0][0];
    int count = 0;
    // int row_count = 0;
    for(int i = 0;i<r;i++){
        int dup = 0;
        for(int j = 0;j<c;j++){
            
            for(int k = j+1;k<c;k++){
                if(arr[i][j]==arr[i][k]){
                    dup = 1;
                    break;
                }
            }
            // if(count>max){
            //     row = i;
            // }
        }
         if(dup==0){
                // row = i;
                count++;
            }
    }
    printf("count = %d",count);
    return 0 ;
}