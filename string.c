#include<stdio.h>
#include<string.h>

char A[11];
char B[11];
char C[30];

int main(){
    scanf("%s", A);
    scanf("%s", B);

    int len1 = strlen(A);
    int len2 = strlen(B);

    printf("%d %d\n",len1,len2);

    for(int i=0; i<len1; i++){
        C[i] = A[i];
    }

    for(int i=0, j=len1; i<len2; i++,j++){
        C[j] = B[i];
    }
    
    printf("%s\n", C);

    int temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s", A);
    printf(" ");
    printf("%s", B);

}