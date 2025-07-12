#include<stdio.h>

int main(){

    int n,countMax=0,countMin=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int min = a[0];
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
            countMax = i;
        }
        if(a[i] < min){
            min = a[i];
            countMin = i;
        }
    }


    for(int i=0; i<n; i++){
        a[countMax] = min;
        a[countMin] = max;
        printf("%d ",a[i]);
    }
}