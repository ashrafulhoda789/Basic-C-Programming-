#include<stdio.h>
#include<string.h>

int main(){
    char str[1000001];
    scanf("%s", str);

    int len = strlen(str);
    int sum = 0;

    for(int i=0; i<len; i++){
        if(str[i]>='0' && str[i] <= '9'){
            sum += str[i] - '0';
        }else{
            break;
        }
    }

    printf("%d\n",sum);
}