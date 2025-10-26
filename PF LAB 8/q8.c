#include <stdio.h>
int main () {
    int floors, rooms, beds;
    int i, j, k;
    int emptybed =0;
    printf("Enter the number of floors:\n");
    scanf("%d", &floors);
    printf("Enter the number of rooms:\n");
    scanf("%d",&rooms);
    printf("Enter the number of beds:\n");
    scanf("%d",&beds);
    int building[floors][rooms][beds];
    for(i=0; i<floors; i++){
        for(j=0; j<rooms; j++){
            for (k=0; k<beds; k++){
                printf("Enter (0 or 1) for floors %d rooms %d beds %d", i+1, j+1, k+1);
                scanf("%d",&building[i][j][k]);
            }
        }
    } for(i=0; i<floors; i++){
        for(j=0; j<rooms; j++){
            for (k=0; k<beds; k++){
                if (building[i][j][k]==0){
                    emptybed++;
                }
            } 
        }
    } printf("The number of empty beds are:%d\n", emptybed);
    return 0;

}