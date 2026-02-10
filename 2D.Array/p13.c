#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row: ");
    scanf("%d",&r);

    printf("Enter the col: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of the array : \n");

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count = 0;
    for(int i = 0;i<r;i++){

        int pal = 1;
        for(int j = 0;j<c/2;j++){
            if(arr[i][j]!=arr[i][c-j-1]){
                pal = 0;
                break;
            }
        }
        if(pal==1){
            count++;
         }
    }
    printf(" count = %d",count);
    return 0 ;
}