#include <stdio.h>

int main(){
    int r,c;

    printf("Enter the row: ");
    scanf("%d",&r);

    printf("enter the col: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter the array values : \n");


    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxnum = 0;
    int maxelement = arr[0][0];

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){

            int count = 0;

            for(int x = 0;x<r;x++){
                for(int y = 0;y<c;y++){
                    
                    if(arr[i][j]==arr[x][y]){
                        count++;
                    }
                }
            }
            if(count>maxnum){
                maxnum = count;
                maxelement = arr[i][j];
            }       
        }
    }
    printf("frequency = %d",maxelement);
    return 0 ;
}