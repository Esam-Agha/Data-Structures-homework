#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void ekle(struct Node** head, int veri) {
    struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));
    struct Node* son = *head;
    yeni->data = veri;
    yeni->next = *head;

    if (*head != NULL) {
        while (son->next != *head)
            son = son->next;
        son->next = yeni;
    } else {
        yeni->next = yeni; 
        *head = yeni;
    }
}


void listele(struct Node* head) {
    struct Node* temp = head;
    if (head != NULL) {
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("(Başa Döndü)\n");
    }
}

int main() {
    struct Node* head = NULL;
    ekle(&head, 1);
    ekle(&head, 2);
    ekle(&head, 3);
    printf("Çembersel Liste: ");
    listele(head);
    return 0;
}