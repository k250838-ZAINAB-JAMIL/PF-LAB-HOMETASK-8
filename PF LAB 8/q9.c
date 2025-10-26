#include <stdio.h>
int main() {
    int cities, days,i,j,k ;
    float max;
    printf("Enter the number of cities:\n");
    scanf("%d", &cities);
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    float temperature[cities][days][3];
    for(i=0; i<cities; i++){
        for(j=0; j<days; j++){
            for(k=0; k<3; k++){
                if (k==0){
                printf("Enter the morning temperature for City %d and Day %d:", i+1, j+1);
                }
                if(k==1){
                printf("Enter the afternoon temperature for City %d and Day %d:", i+1, j+1);
                } if (k==2){
                printf("Enter the night temperature for City %d and Day %d:", i+1, j+1);
                }
                scanf("%f",&temperature[i][j][k]);
            }
        }
    }for(i=0; i< cities; i++){
        max =temperature[i][0][0];
     for(j=0; j<days; j++){
        for(k=0; k<3; k++){
            if (temperature[i][j][k] > max){
                max= temperature[i][j][k];
            }
        }
     }
}printf("The highest temperature %.2f", max);
return 0;
}