#include <stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    for(int i = 0;str[i]!='\0';i++){
        if(str[i]=='@'){
            break;
        }
    printf("%c",str[i]);
    }
    return  0;
}