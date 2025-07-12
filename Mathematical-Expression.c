#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    char s;
    scanf(" %c",&s);
    int b;
    scanf("%d",&b);
    char q;
    scanf(" %c",&q);
    int c;
    scanf("%d",&c);

    if((a+b == c && s == '+' && q == '=') || (a-b == c && s == '-' && q == '=') || (a*b == c && s == '*' && q == '=') || 
    (b-a == c && s == '+' && q == '=') ){
        printf("Yes\n");
    }
    else{
        if(s=='+'){
            printf("%d\n",(a+b));
        }else if(s=='-'){
            printf("%d\n",(a-b));
        }else if(s=='-' && a==b){
            printf("0\n");
        }else if(s=='*'){
            printf("%d\n",(a*b));
        }
            
    }
}