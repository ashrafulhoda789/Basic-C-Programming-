#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int flag = 1; 
    int found = 0;

    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        int num = i;
        flag = 1; 

        while (num != 0) {
            int r = num % 10;
            if (r != 4 && r != 7) {
                flag = 0;
                break;
            }
            num = num / 10;
        }

        if (flag == 1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if(found == 0){
        printf("-1\n");
    }

    return 0;
}
