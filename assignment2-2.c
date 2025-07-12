#include<stdio.h>

int main(){
    int n,zeroCount=0,oneCount=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
       scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] == 0){
            zeroCount++;
        }else{
            oneCount++;
        }
    }

    printf("%d %d\n",zeroCount,oneCount);
}