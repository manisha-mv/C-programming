#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row : ");
    scanf("%d",&r);

    printf("Enter the column : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of an array : \n");
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int balance_count =0;
    for(int i = 0;i<r;i++){
         int count_even = 0;
         int count_odd = 0;
        for(int j = 0;j<c;j++){
            if(arr[i][j]%2==0){
                count_even++;
            }
            else{
                count_odd++;
            }
        }
        if(count_even==count_odd){
        balance_count++;
    }
    }
    printf("balance = %d",balance_count);
    return 0 ;
}