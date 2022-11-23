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

    for(i=0; i<10; i++){

        for(l=10; l>=i; l--){

                printf(" ");

        }

        for(j=1; j<=3; j++){
            printf("*");
        }

        for(j=1; j<=i; j++){

            if(i == 4 ){

                printf("*");

            }else if(i == 5){

                printf("*");

            } else{
                printf(" ");
            }
        }

        for(f=1; f<=i; f++){

            if(i == 4 ){

                printf("*");

            }else if(i == 5){
                printf("*");
            } else{
                printf(" ");

            }
        }


        for(j=1; j<=3; j++){
            printf("*");
        }

        printf("\n");

    }



    return 0;
}
