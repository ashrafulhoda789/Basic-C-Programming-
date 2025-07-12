#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while (t--)
    {
        int a,b,sum=0,temp;
        scanf("%d %d",&a,&b);

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

       for(int i=a+1; i<b; i++){
            if(i%2 !=0){
                sum += i;
            }
        }
        printf("%d\n",sum);
    }
    
}