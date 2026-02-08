#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of an array : ");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0 ;i<r;i++){
        int max = 0;
        for(int j = 0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                // max = i;
            }
        }
        printf("ward %d is highest = %d\n",i+1,max);
    }
    return 0 ;
}