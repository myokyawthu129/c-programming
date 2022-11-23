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
    int d;
    printf("Enter your Diamon Range :");
    scanf("%d", &d);

    for(i=0; i<d; i++){

        for(l=d; l>i; l--){
            printf(" ");
        }

        for(j=1; j<=i; j++){
            printf("#");
        }

        for(j=0; j<=i; j++){
            printf("#");
        }
        printf("\n");

    }

    for(i=d; i>=0; i--){

        for(l=d; l>i; l--) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("#");
        }

        for(j=0; j<=i; j++) {
            printf("#");
        }

        printf("\n");

    }

    return 0;
}