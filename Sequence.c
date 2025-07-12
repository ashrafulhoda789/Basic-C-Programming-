#include<stdio.h>

int main(){

    while (1)
    {
        int n,m,sum = 0;
        scanf("%d %d",&n,&m);

        if(n>m){
            int temp = n;
            n = m;
            m = temp;
        }

        if(n <= 0){
            break;
        }

        for(int i=n; i<=m; i++){
            printf("%d ",i);
            sum += i;
        }
        printf("sum =%d\n",sum);
    }
    
}