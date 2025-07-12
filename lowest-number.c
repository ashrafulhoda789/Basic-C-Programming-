#include<stdio.h>

int main(){
    int count;
    scanf("%d",&count);

    if(count <2 || count > 1000){
        return 0;
    }

    int a[count];

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&a[i]);
    }

    int min = a[0];
    int index = 1;

    for (int i = 0; i < count; i++)
    {
       if(a[i] < min){
        min = a[i];
        index = i+1;
       }
    }

    printf("%d %d",min,index);
    
    
}