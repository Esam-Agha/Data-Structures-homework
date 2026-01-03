#include <stdio.h>

void diziYazdir(int dizi[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", dizi[i]);
    printf("\n");
}

int main() {
    int dizi[10] = {10, 20, 30, 40, 50};
    int n = 5; // Mevcut eleman sayısı
    int ekle_index = 2, yeni_veri = 25;
    int sil_index = 1;

        for (int i = n; i > ekle_index; i--) {
        dizi[i] = dizi[i - 1];
    }
    dizi[ekle_index] = yeni_veri;
    n++;
    printf("Ekleme sonrası: ");
    diziYazdir(dizi, n);

    
    for (int i = sil_index; i < n - 1; i++) {
        dizi[i] = dizi[i + 1];
    }
    n--;
    printf("Silme sonrası: ");
    diziYazdir(dizi, n);

    return 0;
}