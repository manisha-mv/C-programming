#include <stdio.h>

void fibonacci(int num){

    int a = 0,b=1,c;
    printf("%d\n%d\n",a,b);

    for(int i = 2 ;i<num;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}

int main(){

    int num;
    scanf("%d",&num);

    fibonacci(num);
    return 0 ;
}