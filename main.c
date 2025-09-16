#include "src/list.h"
#include <stdio.h>

DEFINE_LINKEDLIST(int, "%d")
DEFINE_LINKEDLIST(float, "%f")

int main() {
    // INT TEST
    intLinkedList *list = NULL;
    list = (struct intLinkedList*)malloc(sizeof(struct intLinkedList));
    list->data = 10;
    list->link = NULL;

    intLinkedList *current = (struct intLinkedList*)malloc(sizeof(struct intLinkedList));
    current->data = 20;
    current->link = NULL;
    list->link = current;

    // FLOAT TEST
    floatLinkedList *fList = NULL;
    fList = (struct floatLinkedList*)malloc(sizeof(struct floatLinkedList));
    fList->data = 3.1416f;
    fList->link = NULL;

    floatLinkedList *fCurrent = (struct floatLinkedList*)malloc(sizeof(struct floatLinkedList));
    fCurrent->data = 2.7182f;
    fCurrent->link = NULL;
    fList->link = fCurrent;

    printf("intLinkedList:\t\t");
    intLinkedList_Traverse(list);
    printf("floatLinkedList:\t");
    floatLinkedList_Traverse(fList);

    return 0;
}
