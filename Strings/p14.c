#include<stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    char str1[30];
    int i ;

    for(i = 0;str[i]!='\0';i++){
        str1[i]=str[i];
    }
    str1[i]='\0';

    printf("%s",str1);
    return 0 ;
}
