#include<stdio.h>

int main(){
    //char str[5] = "123";

    //printf("%d", str[0] - '0');

    // for(int i=0; i<3; i++){
    //     printf("%d", str[i] - '0');
    // }

    char str[20];

    int n;
    scanf("%d",&n);
    scanf("%s", str);


    int num = 0;
    for(int i=0; i<n; i++){
        int digit = str[i] - '0';

        num = num*10 + digit; 
    }

    printf("%d",num);

}