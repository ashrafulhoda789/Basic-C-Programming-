#include<stdio.h>

int a[1000];

int main(){
    int length;
    scanf("%d",&length);

    for(int i=0; i<length; i++){
        scanf("%d",&a[i]);
    }

    for(int i=length-1; i>=0; i--){
        printf("%d ",a[i]);
    }

    
}