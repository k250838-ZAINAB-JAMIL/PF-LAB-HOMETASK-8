#include <stdio.h>
int main() {
    int movement[2][2][2]= {{{1,-2},{-3,4}},
                            {{5,-6},{7,8}}};
      int i,j,k;
      
      printf("Original matrix:\n");
    for(i=0; i<2; i++){
        for (j=0; j<2; j++){
        for(k=0; k<2; k++){
            printf("%d ",movement[i][j][k]);

        }printf("\t");
        
        }printf("\n");

    } printf("Upgraded matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for (k=0; k<2; k++){
                if(movement[i][j][k]<0){
                    movement[i][j][k]= movement[i][j][k] * -1;
                }
                
            }
        }
    }  for(i=0; i<2; i++){
        for (j=0; j<2; j++){
        for(k=0; k<2; k++){
            printf("%d ",movement[i][j][k]);

        }printf("\t");
        
        }printf("\n");

    }
    
    return 0;
}