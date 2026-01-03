#include <stdio.h>

void hanoi(int n, char kaynak, char hedef, char yardimci) {
    if (n == 1) {
        printf("Disk 1'i %c direğinden %c direğine taşı\n", kaynak, hedef);
        return;
    }
    
    hanoi(n - 1, kaynak, yardimci, hedef);
    
    
    printf("Disk %d'yi %c direğinden %c direğine taşı\n", n, kaynak, hedef);
    
    
    hanoi(n - 1, yardimci, hedef, kaynak);
}

int main() {
    int n = 3; 
    printf("%d disk için adımlar:\n", n);
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}