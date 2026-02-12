#include <stdio.h>

int main(){
    int r, c;
    printf("Enter the row and col: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter the elemnts int the array : \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            
            if(i == 0 || i == r-1 || j == 0 || j == c-1){
                sum = sum+arr[i][j];
            }

        }
    }

    printf("%d", sum);

    return 0;
}
