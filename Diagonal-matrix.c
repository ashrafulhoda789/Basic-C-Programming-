#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[10][10];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum += a[i][j];
            }
        }
    }

    printf("Sum of diagonal = %d",sum);
}