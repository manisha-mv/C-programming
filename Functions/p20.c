#include <stdio.h>


void calculator(int num1,int num2,char ch){

    if(ch=='+'){
        printf("Addition = %d",num1+num2);
    }
    else if(ch=='-'){
        printf("Subraction = %d",num1-num2);
    }
    else if(ch=='*'){
        printf("Multiplication = %d",num1*num2);
    }
    else if(ch=='/'){
        printf("divide = %d",num1/num2);
    }
    else if(ch=='%'){
        printf("modulas = %d",num1%num2);
    }


}

int main(){
    int num1;
    int num2;
    char ch;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf(" %c",&ch);
    //  printf("%d",num1-num2);

    calculator(num1,num2,ch);

    return 0 ;
}