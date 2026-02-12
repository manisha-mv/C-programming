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
    int r_count = 0;

    for(int i = 0;i<r;i++){

        int increase = 1;
        for(int j = 0;j<c-1;j++){
            if(arr[i][j]>arr[i][j+1]){
                increase = 0;
                break;
            }
        }
        if(increase){
            r_count++;
        }
    }
    printf("count = %d",r_count);
    return 0 ;
}