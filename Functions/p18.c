#include <stdio.h>


int GCD(int n1,int n2){

    int a = n1;
    int b = n2;

    while(n1!=n2){
        if(n1>n2){
            n1 = n1 - n2;
        }
        else if(n2>n1){
            n2 = n2 - n1;
        }
    }
    printf("GCD = %d\n",n1);
    int LCM = (a*b)/n1;

    return LCM;
    // return n1;

}

int main(){

    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int result = GCD(n1,n2);
    printf("LCM = %d",result);


    return 0 ;
}