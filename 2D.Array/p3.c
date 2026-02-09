#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row: ");
    scanf("%d",&r);
    printf("Enter the cloumn : ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the value of the array : \n");

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // int d= 0;
    int maxct =0;
    for(int i = 0;i<r;i++){
        int count = 0;
        for(int j = 0;j<c;j++){
            int d = 1;
            for(int k = 0;k<c;k++){
                if(j!=k && arr[i][j]==arr[i][k]){
                    d =0;
                    break;
                }
            }
            if(d==1){
                count++;
            }
        }
        if(maxct<count){
            maxct= count;
        }
    }
    printf("max = %d\n",maxct);
    return 0 ;
}