#include<stdio.h>

int main(){

    while (1)
    {
        int x;
        scanf("%d",&x);

        int pass = 1999;

        if(x==pass){
            printf("Correct\n");
            return 0;
        }else{
            printf("Wrong\n");
        }
    }
    
}