#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    int *arr = (int *)malloc(1 * sizeof(int));

    // for(int i=0; i<5; i++){
    //     arr[i] = i+1;
    // }

    // for(int i=0; i<5; i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    int *temp = arr;

    arr = (int *)realloc(arr, n * sizeof(int));

    if(arr == NULL){
        arr = temp;
    }

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }

    free(arr);

}