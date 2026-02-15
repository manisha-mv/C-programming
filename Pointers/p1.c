#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int *p1 = &n1;
    int *p2 = &n2;

    printf("Before swaping : %d %d\n",*p1,*p2);

    int temp = *p1;
    *p1 =*p2;
    *p2 = temp;

    printf("After Swaping : %d %d",*p1,*p2);

    return 0;

}