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

bool equalsCell(Cell *cell1, Cell *cell2){
        if(cell1 == cell2){
            return true;
        }
        else{
            return cell1->yPos == cell2->yPos && cell1->xPos==cell2->xPos && cell1->bottomBorder==cell2->bottomBorder && cell1->topBorder==cell2->topBorder && cell1->leftBorder== cell2->leftBorder && cell1->leftBorder== cell2->leftBorder && cell1->isTraversed==cell2->isTraversed && cell1->isInitialized==cell2->isInitialized;
        }
    }

     public void iterate(){
        if(this.isDone()){

        }
        else if(this.atDestination(currentVirtualCell)){
            this.setDone(true);
        }
        else{
            currentRealityCell.setTraversed(true);
            this.updateVirtualGrid(currentRealityCell);
            this.fill(this.endPoints);
            int currentValue = intGrid[currentVirtualCell.getyPos()][currentVirtualCell.getxPos()];
            int currentXPos = currentVirtualCell.getxPos();
            int currentYPos = currentVirtualCell.getyPos();
            boolean choseNext = false;
            if(currentYPos<15){
                if(intGrid[currentYPos+1][currentXPos] == currentValue-1) {
                    try {
                        if (this.getVirtualGrid().isTherePathBetweenVirtualCells(this.getVirtualGrid().getVirtualCell(currentXPos, currentYPos + 1), this.currentVirtualCell)) {
                            currentVirtualCell = this.getVirtualGrid().getVirtualCell(currentXPos, currentYPos + 1);
                            choseNext = true;
                        }
                    }
                    catch (Exception e){

                    }
                }
            }
            if(currentYPos>0 && !choseNext){
                if(intGrid[currentYPos-1][currentXPos] == currentValue-1) {
                    try {
                        if (this.getVirtualGrid().isTherePathBetweenVirtualCells(this.getVirtualGrid().getVirtualCell(currentXPos, currentYPos - 1), this.currentVirtualCell)) {
                            currentVirtualCell = this.getVirtualGrid().getVirtualCell(currentXPos, currentYPos - 1);
                            choseNext = true;
                        }
                    }
                    catch (Exception e){

                    }
                }
            }
            if(currentXPos<15 && !choseNext){
                if(intGrid[currentYPos][currentXPos+1] == currentValue-1) {
                    try {
                        if (this.getVirtualGrid().isTherePathBetweenVirtualCells(this.getVirtualGrid().getVirtualCell(currentXPos + 1, currentYPos), this.currentVirtualCell)) {
                            currentVirtualCell = this.getVirtualGrid().getVirtualCell(currentXPos + 1, currentYPos);
                            choseNext = true;
                        }
                    }
                    catch (Exception e){

                    }
                }
            }
            if(currentXPos>0 && !choseNext){
                if(intGrid[currentYPos][currentXPos-1] == currentValue-1) {
                    try {
                        if (this.getVirtualGrid().isTherePathBetweenVirtualCells(this.getVirtualGrid().getVirtualCell(currentXPos - 1, currentYPos), this.currentVirtualCell)) {
                            currentVirtualCell = this.getVirtualGrid().getVirtualCell(currentXPos - 1, currentYPos);
                            choseNext = true;
                        }
                    }
                    catch (Exception e){

                    }
                }
            }
            currentRealityCell = this.getRealityGrid().getRealityCell(currentVirtualCell.getxPos(), currentVirtualCell.getyPos());
        }

    }


    struct Cell *getAdjacentCells(Cell *centerCell, Cell* controlgrid) {
        int centerX = centerCell->xPos;
        int centerY = centerCell->yPos;

        int newXIndex;
        int newYIndex;

        adjacentCells = new ArrayList<>(4);

        for (int xBump = -1; xBump < 2; xBump++) {
            for (int yBump = -1; yBump < 2; yBump++) {

                if (abs(xBump) != abs(yBump)) {
                    newXIndex = centerX + xBump;
                    newYIndex = centerY + yBump;
                    if ((newXIndex >= 0) &&
                            (newXIndex <= 16) &&
                            (newYIndex >= 0) &&
                            (newYIndex <= 16)
                    ) {
                        Cell adjacent = controlgrid.getCell(newXIndex, newYIndex);
                        adjacentCells.add(adjacent);
                    }

                }
            }
        }

        return adjacentCells;
    }





int main()
{

    Cell* controlgrid[16][16];
     Cell* currentposition;

    int x  =1;
    printf("Hello World 1: %d\n", x);


for (int i=0; i < 16; i++){
   for (int j=0; j < 16; j++){
      controlgrid[i][j] = malloc(sizeof(Cell));
      controlgrid[i][j]->xPos = i;
      controlgrid[i][j]->yPos = j;


   }
} 
 
    // prints hello world
    printf("Hello World");
 
    return 0;
}