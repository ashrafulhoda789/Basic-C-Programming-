#include<stdio.h>

int main(){

    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
        
    // }

    /*
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    */

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j =i; j >=1; j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
        
    // }
    // int n = 5;

    // for (int i = 1; i <= n; i++) {
    //     // Loop for printing spaces
    //     for (int j = 1; j <= n - i; j++) {
    //         printf(" ");
    //     }

    //     // Loop for printing numbers
    //     for (int k = 1; k <= i; k++) {
    //         printf("%d", k);
    //     }
    //     printf("\n");
    // }
    

    int n;
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        
        for(int k=(n-i); k>=1; k--){
            printf("%d ",k);
        }
        printf("\n");
    }
}