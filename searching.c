#include<stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int x;
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(x == a[i]){
            printf("%d\n",i);
            count++;
            break;
        }
        
    }

    if(count == 0){
        printf("-1\n");
    }

    
}