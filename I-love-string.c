#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char S[51], T[51];
        scanf("%s %s", S, T);
        int i = 0,lenS = strlen(S), lenT = strlen(T);
        int maxLen;
        if(lenS>lenT){
            maxLen = lenS;
        }else{
            maxLen = lenT;
        }

        for (i = 0; i < maxLen; i++) {
            if (i < lenS)
                printf("%c", S[i]);
            if (i < lenT)
                printf("%c", T[i]);
        }
        printf("\n");
    }

    return 0;
}
