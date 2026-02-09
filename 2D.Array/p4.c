#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row: ");
    scanf("%d",&r);

    printf("Enter the col : ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter the array elemnts : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    // int found = 0;
    int max = 0;
    for(int i = 0;i<r;i++){
        int count = 0;
        for(int j = 0;j<c;j++){

            for(int k = 0;k<r;k++){
                for(int l = 0;l<c;l++){
                    if(arr[i][j]==arr[k][l]){
                        max = arr[k][l];
                        count++;
                        // break;
                    }
                }
            }
            
        }
        if(count>1){
                printf("%d ",max);
                // return 0 ;
                // // found = 1;
                break;
            }
    }
    
}