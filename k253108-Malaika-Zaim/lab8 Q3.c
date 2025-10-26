#include <stdio.h>
int main() {
    int mat1[2][2], mat2[2][2], mat_sum[2][2], i, j;
    printf("Enter elements of first 2x2 matrix:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
        	printf("Row %d, column %d: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements of second 2x2 matrix:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
        	printf("Row %d, column %d: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            mat_sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nSum of the two matrices is:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("%d ", mat_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
