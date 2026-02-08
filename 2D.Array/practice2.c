#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter the array value : \n");

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum = 0;
    int maxmonth  = 0;
    for(int i = 0;i<r;i++){
        int sum = 0;
        for(int j = 0;j<c;j++){
            sum = sum + arr[i][j];
            if(maxsum<sum){
                maxsum = sum;
                maxmonth = i;
            }
        }
    }
    printf("%d largest sum is month",maxmonth+1);
    return 0 ;
    // for(int i = 0;i<r;i++){
    //     int max = ;
    //     for(int j = 0 ;j<c;j++){

    //     }
    // }
}