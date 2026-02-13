#include <stdio.h>

void interest(int p ,int r,int t){
    int  pr = r*t;
    float  s_interest = (p*pr)/100;

    printf("%.2f",s_interest);

}

int main(){
    int p;
    scanf("%d",&p);
    int r;
    scanf("%d",&r);
    int t;
    scanf("%d",&t);

    interest(p,r,t);
    // printf("%dn",c);

    return 0 ;
}