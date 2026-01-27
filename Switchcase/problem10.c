// #include <stdio.h>

// int main(){
//     int coder;
//     scanf("%d",&coder);
//     int experi;
//     scanf("%d",&experi);
//     int c = 50000;
//     int d = 35000;

//     switch(experi){
//         case 1:
//         if(experi>=3){
//             int t = experi*5000;
//             printf("%d",c+t);
//         }
//         else {
//             printf("%d",c);
//         }
//         break;
//         case 2:
//         if(experi>=3){
//             int k = experi*5000;
//             printf("%d",k+d);
//         }
//         else {
//             printf("%d",d);
//         }
//         break;
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int type;
    scanf("%d",&type);
    int exp;
    scanf("%d",&exp);

    switch(type){
        case 1:
        if(exp>=3){
        //    int salary = 50000;
           printf("%d",(exp*5000)+50000);
        }
        else {
            printf("50000");
        }
        break;
        case 2:
        if(exp>=3){
        //    int salary = 35000;
           printf("%d",(exp*5000)+35000);
        }
        else {
            printf("35000");
        }
        break;
    }
    return 0;
}