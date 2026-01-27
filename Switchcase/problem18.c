#include <stdio.h>

int main(){
    int attempt;
    scanf("%d",&attempt);
    int marks;
    scanf("%d",&marks);

    switch(attempt){
        case 1:
        if(marks>=80){
            printf("Excellent");
        }
        else{
            printf("Not Qualified");
        }
        break;
        case 2:
        if(marks>=60){
            printf("Good");
        }
        else{
            printf("Not Qualified");
        }
        break;
        case 3:
        printf("Needs improvement");
        break;
    }
    return 0;
}