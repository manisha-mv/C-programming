#include <stdio.h>

int main(){
    int r, c ;
     
    printf("Enter the row: ");
    scanf("%d",&r);

    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of an array : \n");
    for(int i = 0 ;i < r ;i++){
        for(int j = 0;j < c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max = -1;
    int min = 100000;
    for(int i = 0;i < r;i++){
        int sum = 0;
        for(int j = 0;j < c;j++){
            sum = sum + arr[i][j];
        }
        if(max<sum){
            max = sum;
        }
        if(min>sum){
            min = sum;
        }
    }
    printf("difference  = %d  ",max - min);
    return 0 ;
}