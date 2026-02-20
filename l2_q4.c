// printing pattern 

#include <stdio.h>

int main(){
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);

    for(int i = 1;i<=r;i++){

        if(i%2!=0){
            for(int j = 1;j<=2*c;j++){
            printf("*");
        }
    }
        else{
            for(int k = 1;k<=c;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0 ;
}


// #include <stdio.h>

// int main() {
//     int r, c;
//     scanf("%d %d", &r, &c);

//     for (int i = 1; i <= r; i++) {

//         if (i % 2 != 0) {   // Odd row
//             for (int j = 1; j <= 2 * c; j++) {
//                 printf("*");
//             }
//         } 
//         else {              // Even row
//             for (int j = 1; j <= c; j++) {
//                 printf("*");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }
