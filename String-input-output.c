#include<stdio.h>

int main(){

    char str[20];
    // //scanf("%[^\n]s", str);
    fgets(str,sizeof(str), stdin);

    // //printf("%s", str);
    fputs(str,stdout);

    
}