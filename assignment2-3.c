#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(i==x-1 && a[i] == 0){
            a[i] = 1;
        }
        else if(i==x-1 && a[i] == 1){
            a[i] = 0;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}