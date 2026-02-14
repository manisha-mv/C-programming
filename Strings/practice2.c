#include <stdio.h>

int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);

    int length = 0;
    int digit = 0;

    for(int i = 0;i<str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
        length++;

        if(str[i]>='0' && str[i]>='9'){
            digit = 1;
        }
    }
    if(length<=8 && digit==1){
        printf("strong Password");
    }
    else{
        printf("Enter strong Pawword ");
    }
    return 0 ;

}