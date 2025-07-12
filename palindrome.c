#include<stdio.h>
#include<string.h>

char str[1001];
char str2[1001];

int main(){
    scanf("%s", str);

    int len = strlen(str);
    int count = 0;

    for(int j=0, i=len-1; i>=0; i--,j++){

        str2[j] = str[i];

    }

    for(int i=0; i<len; i++){
       if( str2[i] == str[i]){
            count++;
       }
    }

    if(count == len){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}