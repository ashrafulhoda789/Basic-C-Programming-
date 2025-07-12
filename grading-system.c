#include<stdio.h>

int main(){

    int marks;
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("A+\n");
    }else if(marks>=70 && marks<80){
        printf("A\n");
    }else if(marks>=60 && marks<70){
        printf("A-\n");
    }else if(marks>=50 && marks<60){
        printf("B\n");
    }else if(marks>=40 && marks<50){
        printf("C\n");
    }else if(marks>=33 && marks<40){
        printf("D\n");
    }else if(marks>=0 && marks<33){
        printf("Fail\n");
    }else{
        printf("Invalid Nnumber\n");
    }
}