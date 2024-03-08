#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void removeDuplicates(struct Node* head) {
    struct Node* current = head;
    struct Node* nextNode;

    if (current == NULL) {
        return;
    }

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            nextNode = current->next->next;
            free(current->next);
            current->next = nextNode;
        } else {
            current = current->next;
        }
    }
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    printf("Original list: ");
    printList(head);
    removeDuplicates(head);
    printf("List after removing duplicates: ");
    printList(head);
    return 0;
}
