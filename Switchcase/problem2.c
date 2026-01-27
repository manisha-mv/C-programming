#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    int n = m/10;

    switch(n){
        case 9:
        printf("Grade A");
        break;
        case 10:
        printf("Grade A");
        break;
        case 8:
        printf("Grade B");
        break;
        case 7:
        printf("Grade B");
        break;
        case 6:
        printf("Grade C");
        break;
        case 3:
        if(m>31 && m<=39){
        printf("Supplementary");
        break;
        }
        default : printf("Fail");
    }
    return 0;
}

