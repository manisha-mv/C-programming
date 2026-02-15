#include <stdio.h>
#include <string.h>



int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);

    for(int i = len;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0 ;
}