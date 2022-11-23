//
// Created by Myo Kyaw Thu on 11/23/2022.
//

#include "stdio.h"


int main(){

    int i;
    int j;
    int k;
    int l;
    int m;
    int d=3;
    int f;
    int a;
    int b;

    for(i=0; i<5; i++){

        for(j=10; j>=i; j--){
            printf(" ");
        }

        for(l=0; l<=i; l++){

            printf("*");

        }

        for(k=1; k<=i; k++){

            printf("*");

        }

        printf("\n");

    }

    for(i=2; i<8; i++){

        for(j=10; j>=i; j--){
            printf(" ");
        }

        for(l=0; l<=i; l++){

            printf("*");

        }
        for(l=1; l<=i; l++){

            printf("*");

        }


        printf("\n");

    }

    for(i=5; i<12; i++){

        for(j=10; j>=i; j--){
            printf(" ");
        }

        for(l=0; l<=i; l++){

            printf("*");

        }
        for(l=1; l<=i; l++){

            printf("*");

        }

        printf("\n");

    }

    for(a=0; a<=5; a++){
        for(b=10; b>0; b--){
            printf(" ");
        }

        printf("*");
        printf("*");
        printf("*");
        printf("*");

        printf("\n");
    }


    return 0;
}
