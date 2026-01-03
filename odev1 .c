#include <stdio.h>

int main() {
  
    int matrix[4][4] = {
        {0, 0, 3, 0},
        {0, 0, 0, 0},
        {1, 0, 0, 0},
        {0, 4, 0, 0}
    };

    int sparseMatrix[10][3]; 
    int k = 0;

        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                sparseMatrix[k][0] = i;   
                sparseMatrix[k][1] = j;    
                sparseMatrix[k][2] = matrix[i][j]; 
                k++;
            }
        }
    }

        printf("Satir\tSutun\tDeger\n");
    for (int i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]);
    }

    return 0;
}