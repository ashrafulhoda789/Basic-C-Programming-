#include<stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0,i=n-1; j<n; j++,i--){
        arr2[i] = arr[j];
    }

    for(int i=0; i<n; i++){
        if(arr2[i] == arr[i]){
            count++;
        }
    }

    if(count == n){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}