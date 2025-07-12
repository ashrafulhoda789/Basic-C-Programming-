#include<stdio.h>
#include<string.h>

char str[100000];

int main(){

    scanf("%s", str);

    int len = strlen(str);

    for(int i=0; i<len; i++){
        if(str[i] == ','){
            str[i] = ' ';
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }

    printf("%s", str);
}