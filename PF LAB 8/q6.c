#include <stdio.h>
int main() {
    int seating[3][3];
    int i, j;
    int flag = 1;
    printf("Enter the numbers for the matrix\n");
 for( i =0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            scanf("%d", &seating[i][j]);
        }
    } for( i =0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            printf(" %d", seating[i][j]);
        }printf("\n");
    }
    for( i =0 ; i<3 ; i++){
        for(j=0; j<3 ; j++){
            if (i == j && seating[i][j] != 1){
                flag = 0;
                break;
            } if (i != j && seating[i][j] != 0){
                flag = 0;
                break;
            }
        }
    }if (flag == 1){
        printf("The students are sitting in the correct seats because the matrix is identity matrix\n");
    }else {
        printf("The students are not sitting in the correct seats because he matrix is not identity matrix\n");
    }
}