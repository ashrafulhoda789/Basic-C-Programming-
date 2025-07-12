#include<stdio.h>
#include<string.h>
char str[101];
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%s", str);

        int len =strlen(str);
        int count = 0;

        if(len <= 10){
            printf("%s\n", str);
        }else{
            printf("%c",str[0]);
            for(int i=1; i<len-1; i++){
                
                count++;
                
            }
            printf("%d",count);
            printf("%c\n", str[len - 1]);
        }
    }
}