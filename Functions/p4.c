#include <stdio.h>


void circle_area(int r){

    int pr = r*r;
    float area = 3.14*pr;

    printf("%.2f",area);
}

int main(){
    int r;
    scanf("%d",&r);
    circle_area(r);
    return 0 ;
}