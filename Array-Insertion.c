#include<stdio.h>

int a[1000];

int main(){
    int length;

    scanf("%d",&length);

    for(int i=0; i<length; i++){
        scanf("%d",&a[i]);
    }

    int index,value;
    scanf("%d %d",&index,&value);

    length++;

    for(int i=length - 1; i>=index; i--){
        a[i+1] = a[i];
    }

    a[index] = value;

    for(int i=0; i<length; i++){
        printf("%d ",a[i]);
    }
}