#include <stdio.h>

void swap(int *n,int *m){
    int temp =*n;
    *n=*m;
    *m= temp;
    printf("Swap is done\n");
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping  %d %d",a,b);
    return 0 ;
}