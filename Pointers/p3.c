#include <stdio.h>

int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);

    char *p = str;

    int count = 0;

    for(int i = 0;p[i]!='\0';i++){
        if(p[i]=='a' || p[i]=='e' | p[i]=='i' ||p[i]=='o' ||
        p[i]=='u' || p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' ||
        p[i]=='U' ){
        count++;
    }
    }
    printf("Vowels count = %d",count);
    return 0 ;
}