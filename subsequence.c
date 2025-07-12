#include <stdio.h>
#include <string.h>

int main() {
    char S[10005];
    scanf("%s", S);

    char target[] = "hello";
    int targetIndex = 0, len = strlen(S);


    for (int i = 0; i < len; i++) {
        if (S[i] == target[targetIndex]) {
            targetIndex++;
        }
        if (targetIndex == 5) {
            break;
        }
    }

    if (targetIndex == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
