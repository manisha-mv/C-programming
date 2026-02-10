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
    int found = 1;
    int count = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){

            int num = arr[i][j];

            if(num<=1){
                continue;
            }
            int prime = 1;

            for(int k = 2;k<num;k++){
                if(num%k==0){
                    prime = 0;
                    break;
                }
            }
            if(prime==1){
                count++;
            }
        }
    }
    printf("count = %d",count);
    return 0;
}