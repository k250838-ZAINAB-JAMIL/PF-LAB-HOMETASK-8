#include <stdio.h>
int main() {
    int matrix[2][3];
    int i;
    int j;
    int counter= 0;
    int length = sizeof(matrix)/ sizeof(matrix[0][0]);
    int sparce;
    printf("Enter the numbers for 2 by 3 matrix:\n");
    for (i = 0 ; i< 2; i++){
        for (j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    

    } 
    for (i = 0 ; i< 2; i++){
        for (j=0; j<3; j++){
            printf(" %d", matrix[i][j]);
            
        } printf("\n");
    }
    for (i = 0 ; i< 2; i++){
        for (j=0; j<3; j++){
            if(matrix[i][j] == 0){
            counter++;
            }
        }
    }
   sparce = length / 2;
   if(sparce < counter){
printf("The given matrix is sparce matrix!\n");
   } else {
    printf("The given matrix is not sparce matrix\n");
   }

}