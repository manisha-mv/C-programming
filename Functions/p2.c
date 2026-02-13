#include <stdio.h>

void maximun(int a,int b){

    if(a>b){
        printf("%d",a);
    }
    else if(b>a){
        printf("%d",b);
    }
    else {
        printf("both are equal");    
    }
}


int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);

    maximun(a,b);
    return 0 ;
}