// Simple C program to display "Hello World"
 
// Header file for input output functions
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

 
// main function -
// where the execution of program begins

typedef struct Cell {
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

 bool isTherePathBetweenCells(Cell *from, Cell *to) {

        int fromX = from->xPos;
        int fromY = from->yPos;
        int toX = to->xPos;
        int toY = to->yPos;

        if (((fromY == toY) && (fromX == toX + 1)) && ((!from->leftBorder) && (!to->rightBorder))) {
            return true;
        } else if (((fromY == toY) && (fromX + 1 == toX)) && ((!from->rightBorder) && (!to->leftBorder))) {
            return true;
        } else if (((fromX == toX) && (fromY == toY + 1)) && ((!from->topBorder) && (!to->bottomBorder))) {
            return true;
        } else return ((fromX == toX) && (fromY + 1 == toY)) && ((!from->bottomBorder) && (!to->topBorder));
    }

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

    Cell* controlgrid[16][16];
     Cell* currentposition;

    int x  =1;
    printf("Hello World 1: %d\n", x);


for (int i=0; i < 16; i++){
    printf("\n");

   for (int j=0; j < 16; j++){
      controlgrid[i][j] = malloc(sizeof(Cell));
      controlgrid[i][j]->xPos = i;
      controlgrid[i][j]->yPos = j;

      if(i == 0){
        
      }


      
       printf("(%d, ", controlgrid[i][j]->xPos);
        printf("%d) ", controlgrid[i][j]->yPos);
   }
       printf("\n");

} 
 
    // prints hello world
    printf("Hello World");


   
    return 0;
}