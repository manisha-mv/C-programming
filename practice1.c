#include <stdio.h>

int main(){

    char str[20];
    fgets(str,sizeof(str),stdin);

    int count = 0;

    for(int i = 0;i<str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u' 
        || str[i]=='A' ||str[i]=='E' || str[i]=='I'||  str[i]=='O' || str[i]=='U')

        count++;
    }
    printf("Vowels count = %d",count);
    return 0 ;
}