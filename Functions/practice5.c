#include <stdio.h>

void extract(char str[]){
        char newstr[100];
        int j = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            newstr[j]=str[i];
            j++;
            // sum = 1;
        }
    }
        newstr[j]='\0';
        printf("%s",newstr);
    }
    // return str[i];

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    extract(str);
    return 0 ;
}