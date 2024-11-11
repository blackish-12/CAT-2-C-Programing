//c array -2D
#include <stdio.h>

//declare and initialize 2D array with 2 rows and 2 columns

int main() {

int scores[2][2] = {{65,92},{84,72}},{{35,70},{59,67}};

//print the elements of the 2D array using nested for loop

printf("Elements of the score array:\n");

   for (int i=0;i<2;i++) {

          for (int j=0;j<2;j++){

              printf("scores [%d][%d]=%d\n",i,j,scores[i][j]);

}}

return 0;

}