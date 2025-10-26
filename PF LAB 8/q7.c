#include <stdio.h>
int main() {
    int i, j, space,n;
    char ch;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
    for(space=i; space<=n; space++){
    printf(" ");
    } 

    ch = 'A';
   
    for (j=0; j<i; j++ ){
    printf(" %c", ch);
    ch++; 
    }
    printf("\n");
}
}

