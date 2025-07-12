#include <stdio.h>
#include <string.h>

char str[10000001];

int main() {
    
    scanf("%s", str);

    int len = strlen(str);

    int f[26] = {0};

    for(int i=0; i<len; i++){
        char ch = str[i];
        int index = ch - 'a';
        f[index]++;

    }

    for(int i=0; i<26; i++){
        if(f[i]>0){
            printf("%c : %d\n",'a' + i ,f[i]);
        }
    }
}
