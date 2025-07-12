#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        //int r;
        scanf("%d",&n);

        //int temp = n;

        // while(temp!=0){
        //     int sum=0;
        //     r = temp%10;
        //     sum = sum*10 + r;
        //     temp = temp/10;
        //     printf("%d ",sum);
        // }

        //another process

        if(n==0){
            printf("0\n");
        }

        while(n>0){
            int digit = n%10;
            printf("%d ",digit);

            n /= 10;
        }
    }
}