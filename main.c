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
    intLinkedList_Append(list, 20);
    intLinkedList_Append(list, 30);
    intLinkedList_Append(list, 40);
    intLinkedList_Append(list, 50);

    // FLOAT TEST
    floatLinkedList *fList = NULL;
    fList = (struct floatLinkedList*)malloc(sizeof(struct floatLinkedList));
    fList->data = 1.4142f;
    fList->link = NULL;

    floatLinkedList_Append(fList, 1.6180f);
    floatLinkedList_Append(fList, 2.7182f);
    floatLinkedList_Append(fList, 3.1416f);
    floatLinkedList_Append(fList, 9.81f);

    printf("intLinkedList:\t\t");
    intLinkedList_Traverse(list);
    printf("floatLinkedList:\t");
    floatLinkedList_Traverse(fList);

    return 0;
}
