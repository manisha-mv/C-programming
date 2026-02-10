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
    int maxsum = -100000000;
    int max_index = 0;

    for(int j = 0;j<c;j++){ 
            int sum = 0;
        for(int i = 0;i<r;i++){
            sum = sum + arr[i][j];
            // break;
        }
        if(sum>maxsum){
            maxsum = sum;
            max_index = j;

        }
    }
    printf("sum = %d\n",max_index);
    return 0 ;
}