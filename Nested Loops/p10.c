#include <stdio.h>

int main(){
    int rows= 5;

    for(int i =1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = rows-1;i>=1;i--){
        for(int star = 1;star<=i;star++){
            printf("\n");
        }
        printf("\n");
    }
    return 0; 
}