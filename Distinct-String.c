#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "aabc";

    char f[26] = {0};

    int len = strlen(str);

    for(int i=0; i<len; i++){
        char ch = str[i];
        int index = ch - 'a';
        f[index] = 1;
    }

    int cnt = 0;
    for(int i=0; i<26; i++){
        

        //If we want to print distinct character
        if(f[i] == 1){
            printf("%c ", i + 'a');
            cnt += f[i];
        }
        
        printf("\n%d",cnt);
    }

    //If we want how much distinct character are here.

    
}