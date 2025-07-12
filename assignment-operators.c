#include<stdio.h>
#include<stdbool.h>

int main(){
    
    int a = 10;
    int x = a++;
    --x;
    a--;
    int y = --x;

    // a +=10;
    // printf("%d\n",a);

    //Increment and Decrement operators

    

    printf("%d\n",y--); //8

    // printf("%d\n",++a); //51
    // printf("%d\n",a++); //51
    // printf("%d\n",a); //52
    // printf("%d\n",++a); //53

    // printf("%d\n",--a); //52
    // printf("%d\n",a--); //52
    // printf("%d\n",a--); //51
    // printf("%d\n",a); //50
    // printf("%d\n",a--); //50

    // int c = 8, d = 5;

    // bool flag = c<=d;

    // printf("flag = %d", flag);




    
}