#include <stdio.h>

int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);

    int count = 0;

    for(int i = 0;str[i]!='\0';i++){
        if((str[i]>='A' && str[i]<='Z') ||
            (str[i]>='a' && str[i]<='z') || 
            (str[i]>='1' && str[i]<='9' )||
            (str[i]==' ' || str[i]=='\n')){
            continue;
    }
    count++;
}
    printf("Special char count = %d",count);
    return  0 ;
}