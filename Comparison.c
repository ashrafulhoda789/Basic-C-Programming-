#include<stdio.h>

int main(){

    int a;
    
    scanf("%d",&a);
    char s;
    scanf(" %c",&s);
    int b;
    scanf("%d",&b);

    if((a>b && s == '>') || (a<b && s == '<') || (a==b && s == '=')){
        printf("Right\n");
    }else{
        printf("Wrong\n");
    }
}