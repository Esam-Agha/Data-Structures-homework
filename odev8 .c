#include <stdio.h>

int visited[10];
int adj[10][10] = {
    {0, 1, 0, 0, 0}, 
    {1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0}, 
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}  
};

void findCluster(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i])
            findCluster(i, n);
    }
}

int main() {
    int n = 5, clusterCount = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            clusterCount++;
            printf("Kume %d: ", clusterCount);
            findCluster(i, n);
            printf("\n");
        }
    }
    return 0;
}