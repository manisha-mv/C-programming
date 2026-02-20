// Fibonnacci to print only even Numbers

#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);

    int a = 0;
    int b = 1;
    int temp ;

    // if(n>=1){
    //     printf("%d\n",a);
    // }
    // else if(n>=2){
    //     printf("%d",b);
    // }

    for(int i = 0;i<n;i++){
        if(a%2==0){
            printf("%d ",a); //for printing the even number up to nth term 
        } 
        // printf("%d",a);
        
        temp = a+b;
        a = b;
        b = temp;
        // printf("%d\n",temp);
        }
         return 0 ;
    }