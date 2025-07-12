#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);

    if(x >= 'a' && x <= 'z'){
        x = x - 32;
        printf("%c",x);
    }else if(x >= 'A' && x <= 'Z'){
        x = x + 32;
        printf("%c",x);
    }
}