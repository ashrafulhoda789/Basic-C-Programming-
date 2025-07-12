#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int r = n%10;
    int temp = n/10;

    if(r%temp == 0 || temp%r == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}