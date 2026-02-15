#include <stdio.h>

int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);

    int count = 1;

    for(int i = 0 ;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("word count = %d",count);
    return 0 ;
}