#include <stdio.h>
int main() {
    int i, j, k;
    int patients;
    int vitalsigns;
    int wards;
    float rowsum;
    float colsum;

    printf("Enter the number of wards:\n");
    scanf("%d", &wards);
    printf("Enter the number of patients:\n");
    scanf("%d", &patients);
    printf("Enter the number of vital signs:\n");
    scanf("%d", &vitalsigns);
      int vitals[wards][patients][vitalsigns];
    for(i=0; i< wards; i++){
        for (j=0; j< patients; j++){
            for (k=0; k< vitalsigns; k++){
                printf("Enter the vital signs %d of patient %d of ward %d\n", k+1, j+1, i+1);
                 scanf("%d", &vitals[i][j][k]);
            }
        }
    }
    for (i=0; i< wards; i++){
        printf("The information about wards:\n");
        for(j=0; j<patients; j++){
        float rowsum =0;
        for(k=0; k<vitalsigns; k++){
          rowsum += vitals[i][j][k];
        }printf("The total of patient %d= %.2f\n", j+1, rowsum);
        }
    
    for (k=0; k< vitalsigns; k++){
        colsum =0;
        for (j=0; j<patients ; j++){
            colsum += vitals[i][j][k];
        } 
        printf("The sum of vital signs of patient %d is %.2f\n", k+1, colsum);

    }
}
    return 0;

}