#include <stdio.h>

int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);

    int password =1;

    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            password = 0;
        }
    }
    if(password==0){
        printf("VAlid");
    }
    else{
        printf("Invalid");
    }
    return 0 ;
}