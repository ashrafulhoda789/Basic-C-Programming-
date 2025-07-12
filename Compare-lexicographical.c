#include<stdio.h>
#include<string.h>

char X[21];
char Y[21];

int main(){

    scanf("%s", X);
    scanf("%s", Y);

    int d = strcmp(X,Y);

    if(d==0){
        printf("%s\n",X);
    }else if(d>0){
        printf("%s\n",Y);
    }else{
        printf("%s\n",X);
    }

}