#include <stdio.h>

void printTree(int arr[], int n, int i) {
    if (i < n) {
        printf("Dugum: %d", arr[i]);
        if (2 * i + 1 < n) printf(", Sol Cocuk: %d", arr[2 * i + 1]);
        if (2 * i + 2 < n) printf(", Sag Cocuk: %d", arr[2 * i + 2]);
        printf("\n");
        
        printTree(arr, n, 2 * i + 1);
        printTree(arr, n, 2 * i + 2);
    }
}

int main() {
    int treeArr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("Array tabanli agac yapisi:\n");
    printTree(treeArr, n, 0);
    return 0;
}