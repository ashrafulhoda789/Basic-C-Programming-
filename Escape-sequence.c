#include<stdio.h>

int main(){
    char str[] = "Bangl\\adesh \n is\t a \"beau\0tiful\" country";

    fputs(str,stdout);
}