#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        long long fact = 1;
        for(int i=1; i<=n; i++){
            fact = fact*i;
        }
        printf("%lld\n",fact);
    }
}