#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

#define DEFINE_LINKEDLIST(TYPE, FORMAT) \
  typedef struct TYPE##LinkedList { \
    TYPE data; \
    struct TYPE##LinkedList *link; \
  } TYPE##LinkedList; \
  \
  static inline void TYPE##LinkedList_Traverse(TYPE##LinkedList *head) { \
    TYPE##LinkedList* current = NULL; \
    current = head; \
    \
    while (current != NULL) { \
      printf(FORMAT "\t", current->data); \
      current = current->link; \
    } \
    printf("\n"); \
  } \
  \
  static inline void TYPE##LinkedList_Append(TYPE##LinkedList *head, TYPE data) { \
    TYPE##LinkedList *current; \
    TYPE##LinkedList *temp;\
    \
    current = head;\
    temp = (TYPE##LinkedList*)malloc(sizeof(TYPE##LinkedList)); \
    \
    temp->data = data; \
    temp->link = NULL; \
    \
    while (current->link != NULL) {\
      current = current->link;\
    }\
    current->link=temp; \
    return;\
  }
#endif