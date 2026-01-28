#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int a = 0;
    int b =1;
    int next;

    for(i=0;i<=n;i++){
       next = a+b;
    printf("%d ",a);
    a=b;
    b=next;
    }
    return 0;
}
