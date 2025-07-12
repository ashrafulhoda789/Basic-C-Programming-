#include<stdio.h>

void shiftZeros(int a[], int n){

    int b[n];
    int j=0;

    for(int i=0; i<n; i++){
        if(a[i] != 0){
            b[j] = a[i];
            j++;
        }
    }

    for(int k=j; k<n; k++){
        b[k] = 0;
    }

    for(int i=0; i<n; i++){
        printf("%d ",b[i]);
    }
}

int main(){

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    shiftZeros(a,n);

}