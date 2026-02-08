#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the row:");
    scanf("%d",&r);
    printf("Enter the column : ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("Enter value of an array : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max1 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]>=0){
                 if(max1<arr[i][j]){
                max1= arr[i][j];
            }
        }
    }
    }
    int max2 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]>=0){
                if(max2<arr[i][j] && max1!=arr[i][j]){
                max2= arr[i][j];
            }
            }
        }
    }
    int maxproduct = max1*max2;
    int min1 =0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]<0){
                if(min1>arr[i][j]){
                    min1 = arr[i][j];
                }   
            }
        }
    }
    int min2 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]<0){
                if(min2>arr[i][j] && min1!=arr[i][j]){
                    min2 = arr[i][j];
                }
                else{
                    min2 = arr[i][j];
                }
            }
        }
    }
    int minproduct = min1*min2;

    if(maxproduct>minproduct){
        printf(" max product = %d",maxproduct);
    }
    else{
        printf("max product = %d",minproduct);
    }
    // return 0 ;
    // printf("min product %d ",minproduct);
    return 0 ;
}

// #include <stdio.h>

// int main(){
//     int r,c;
//     scanf("%d",&r);
//     scanf("%d",&c);

//     int arr[r][c];
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int max1 ,max2;
//     int maxpos1,maxpos2;
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//         }
//     }
// }




