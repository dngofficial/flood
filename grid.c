// Simple C program to display "Hello World"
 
// Header file for input output functions
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

 
// main function -
// where the execution of program begins

typedef struct {
    int priority;

    int xPos;
    int yPos;
    bool isTraversed;

    bool topBorder;
    bool rightBorder;
    bool bottomBorder;
    bool leftBorder;

    bool isGoal;
    bool isInitialized;
} Cell;

bool equalsCell(Cell *cell1, Cell *cell2){
        if(cell1 == cell2){
            return true;
        }
        else{
            return cell1->yPos == cell2->yPos && cell1->xPos==cell2->xPos && cell1->bottomBorder==cell2->bottomBorder && cell1->topBorder==cell2->topBorder && cell1->leftBorder== cell2->leftBorder && cell1->leftBorder== cell2->leftBorder && cell1->isTraversed==cell2->isTraversed && cell1->isInitialized==cell2->isInitialized;
        }
    }



int main()
{

    /*/ Cell* controlgrid[16][16];
     Cell* currentposition;

    int x  =1;
    printf("Hello World 1: %d\n", x);

    

for (int i=0; i < 16; i++){
   for (int j=0; j < 16; j++){
      controlgrid[i][j] = malloc(sizeof(Cell));
   }
} 




  for (int i = 0; i < 16; i++) {


        for (int j = 0; j < 16; j++){
            controlgrid[i][j]->xPos = i;
            controlgrid[i][j]->yPos = j;


            controlgrid[i][j]->leftBorder = false;
            controlgrid[i][j]->topBorder = false;
            controlgrid[i][j]->bottomBorder = false;
            controlgrid[i][j]->rightBorder = false;

            if(i==0){controlgrid[i][j]->topBorder = true;}
            if(i==16){controlgrid[i][j]->bottomBorder = true;}
            if(j==0){controlgrid[i][j]->leftBorder = true;}
            if(j==16){controlgrid[i][j]->rightBorder = true;}




            controlgrid[i][j]->priority = 0;

            printf("xPos: %d ", controlgrid[i][j]->xPos);
            printf("yPos: %d\n", controlgrid[i][j]->yPos);
        }
    }

     for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++){
    
            if(controlgrid[i][j]->topBorder){printf("---");}else{printf("   ");}
            //printf("xPos: %d ", controlgrid[i][j]->xPos);
            //printf("yPos: %d\n", controlgrid[i][j]->yPos);
        }
        for (int j = 0; j < 16; j++){
    
            if(controlgrid[i][j]->leftBorder){printf("|");}else{printf(" ");}
            if(controlgrid[i][j]->rightBorder){printf("|");}else{printf(" ");}
            //printf("xPos: %d ", controlgrid[i][j]->xPos);
            //printf("yPos: %d\n", controlgrid[i][j]->yPos);
        }
    }
    // prints hello world
    printf("Hello World"); */

    int A = 0;
    int B = 0;
    int i = 10;

    int temp = 0;

   while(0 < i){
    i--;
    B += 2;
   }

   printf("B = %d", B);


 
    return 0;
}