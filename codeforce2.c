#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);


    if(a==b || b==c || c==a){
        if(a==b){
            if(b>c){
                printf("%d ",c);
                printf("%d\n",b);
            }else{
                printf("%d ",b);
                printf("%d\n",c);
            }
        }else if(b==c){
            if(b>a){
                printf("%d ",a);
                printf("%d\n",b);
            }else{
                printf("%d ",b);
                printf("%d\n",a);
            }
            
        }else{
            if(a>b){
                printf("%d ",b);
                printf("%d\n",a);
            }else{
                printf("%d ",a);
                printf("%d\n",b);
            }
            
        }
    }

    else if(a>b && a>c){
        
        if(b>c){
            printf("%d ",c);
        }else{
            printf("%d ",b);
        }
        printf("%d\n",a);
    }
    else if(b>a && b>c){
        
        if(a>c){
            printf("%d ",c);
        }else{
            printf("%d ",a);
        }
        printf("%d\n",b);
    }else{
        
        if(b>a){
            printf("%d ",a);
        }else{
            printf("%d ",b);
        }
        printf("%d\n",c);
    }
}