#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 3, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 3, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    // int option;

    // printf("digite uma opçao \n");

    // scanf("%d", &option);


        int x;
        int y;

            printf("digite seu tiro x e y \n");

            printf("x: ");
            scanf("%d",&x);

            printf("y: ");
            scanf("%d",&y);


            if(tabuleiro[x][y] == 3){
                printf("tiro em navio \n");
            }else{
                printf("tiro em agua \n");
            }


        for(int i = 0; i < 10; i++){

            for(int j = 0; j < 10; j++){
            
            printf("%d ", tabuleiro[i][j]);

            }
           printf("\n");
        }

   
    

    return 0;

}
