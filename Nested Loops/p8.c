#include <stdio.h>

int main(){
    int rows = 5;
    for(int i = rows;i>=1;i--){
        for(int space = 1;space<=rows-i;space++){
            printf(" ");
        }
        for(int star= 1;star<=2*1-1;star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}