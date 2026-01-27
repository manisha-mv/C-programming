#include <stdio.h>

int main(){
    int class;
    scanf("%d\n",&class);
    int age;
    scanf("%d",&age);

    switch(class){
        case 1:
        if(age<=12){
            int dis= (300/100*50);
            printf("%d",dis);
        }
        else if(age>=60){
            int dis=(300/100*33);
            printf("%d",dis);
        }
        else {
            printf("₹300");
        }
        break;
        case 2:
        if(age<=12){
            int dis= (300/100*50);
            printf("₹%d",dis);
        }
        else {
            printf("₹1000");
        }
        break;
    }
    return 0;
}