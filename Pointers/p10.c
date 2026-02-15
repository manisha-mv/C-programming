#include <stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    for(int i = 0 ;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
        str[i] = str[i]+32;
    }
     printf("%c",str[i]);
    }
    return 0 ;
}
// uppercase to lowercase