#include <stdio.h>

int main(){
    char str[20];
    char str1[20];
    fgets(str,sizeof(str),stdin);

    int i;
    char *p = str;
    char *p1 = str1;

    for(i = 0;p[i]!='\0';i++){
        p1[i]=p[i];
    }
    p1[i]='\0';

    printf("%s",str1);

    return 0 ;



}