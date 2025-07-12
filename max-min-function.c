#include<stdio.h>
int a[100001];

void findMinMax(int a[], int n){
    int min = a[0];
    int max = a[0];

    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }

    printf("%d %d\n",min, max);
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    findMinMax(a,n);
}