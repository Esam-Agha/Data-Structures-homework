#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


void basaEkle(struct Node** head, int veri) {
    struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
    yeni->data = veri;
    yeni->next = (*head);
    yeni->prev = NULL;
    if ((*head) != NULL) (*head)->prev = yeni;
    (*head) = yeni;
}


void dugumSil(struct Node** head, struct Node* silinecek) {
    if (*head == NULL || silinecek == NULL) return;
    if (*head == silinecek) *head = silinecek->next;
    if (silinecek->next != NULL) silinecek->next->prev = silinecek->prev;
    if (silinecek->prev != NULL) silinecek->prev->next = silinecek->next;
    free(silinecek);
}

void listele(struct Node* node) {
    while (node != NULL) {
        printf("%d <-> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    basaEkle(&head, 10);
    basaEkle(&head, 20);
    basaEkle(&head, 30);
    printf("Liste: ");
    listele(head);
    return 0;
}