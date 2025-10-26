#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j, k;
    int saddle = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        	printf("Element at [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        int min=matrix[i][0];
        int col = 0;
//        finding smallest element in current row
        for(j=1; j< 3; j++){
            if(matrix[i][j]<min){
                min=matrix[i][j];
                col=j;
            }
        }
//		checking if largest in column too
        int isSaddle=1;
        for(k=0; k<3; k++){
            if(matrix[k][col]>min){
                isSaddle = 0;
                break;
            }
        }
        if(isSaddle==1){
            printf("\nSaddle point = %d (Row %d, Column %d)\n", min, i+1, col+1);
            saddle=1;
        }
    }
    if (saddle==0)
        printf("\nNo saddle point found.\n");
    return 0;
}

