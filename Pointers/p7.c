#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);

    char *p = str;
    int i = 0;
    int j = strlen(p)-2;

    int palindrome = 1;

    while(i<j){
        if(p[i]!=p[j]){
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(palindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0 ;
}