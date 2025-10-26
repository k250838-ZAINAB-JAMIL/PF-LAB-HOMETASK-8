#include <stdio.h>
int main() {
    int image[4][3][2] = {{{255, 100 , 100}, {50, 150, 200}, {255, 255 ,0}, {128, 128, 128}}};
    long sumofchannels= 0;
    long sumr=0, sumg=0, sumb=0;
    int rows =4;
    int columns = 3;
    int i, j, k;
     int totalpixelcount = 3*2 ;
     int totalintensityvalues = 3*2*2;
     for (i=0; i< 4; i++){
         for(j= 0; j<3; j++){
            for (k=0; k<2; k++){
                int intensity = image[i][j][k];
                sumofchannels += intensity; 
                if(k==0){
                    sumr += intensity;
                }else if (k==1){
                    sumg += intensity;
                } else if (k==2){
                    sumb += intensity;
                }
            }
         }
     } double overallavgintensity = (double) sumofchannels/ totalintensityvalues;
     double avgr = (double) sumr/ totalpixelcount;
     double avgg = (double) sumg/ totalpixelcount;
     double avgb =(double) sumb / totalpixelcount;
     printf("RBG image intensity (%d by %d):\n", rows, columns);
   
    printf("Average Red Channel Intensity:   %.2f\n", avgr);
    printf("Average Green Channel Intensity: %.2f\n", avgg);
    printf("Average Blue Channel Intensity:  %.2f\n", avgb);
    printf("OVERALL AVERAGE COLOR INTENSITY: %.2f\n", overallavgintensity);
 return 0;
}