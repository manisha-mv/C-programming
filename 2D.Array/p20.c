#include <stdio.h>

int main(){
    int r , c;
    
    printf("Enter the row : ");
    scanf("%d",&r);

    printf("Enter the col : ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //  int row = arr[0][0];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){

            int count = 0;

            for(int k = 0;k<r;k++){
                for(int l = 0;l<c;l++){

                    if(arr[i][j]==arr[k][l]){
                       count++;
                        // break;
                    }
                }
            }
            if(count==1){
                // row =arr[i][j];
                printf("non Repeating = %d",arr[i][j]);
                return 0 ;
            }
        }
    }
    // return 0 ;
}