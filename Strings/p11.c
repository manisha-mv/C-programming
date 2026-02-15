#include<stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    int count = 0;

    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='1' && str[i]<='9'){
            count++;
        }
    }
    printf("Digit count = %d",count);
    return 0 ;
}