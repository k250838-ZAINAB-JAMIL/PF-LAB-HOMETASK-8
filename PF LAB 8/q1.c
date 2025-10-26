#include <stdio.h>
int main() {
    int sales1[2][2] = {{1, 2},
                        {3, 4}};
     int sales2[2][2]= {{5, 6},
                      {7, 8}};
       
    int i;
    int j;
    int k;
    int sum[2][2];
    for (i = 0; i<2; i++){
    for (j= 0; j<2; j++){
printf("%d %d", sales1[i][j],sales2[i][j]);

        } 

         printf("\n");
    }
        sum[2][2]= sales1[i][j]+sales2[i][j];

printf("Combined sales data:\n");
     for(i=0; i< 2; i++){
        for(j=0; j<2; j++){
            printf("%d", sum[2][2]);
        }printf("\n");
    }  
  
    return 0;

    }
   



                        

    
