#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "./linked_list.h"

struct node {
  list_value_type value;
  node* next;
};


/**
 * @brief Creates a new linked list with first node initialized to the value provided
 * 
 * @param value 
 * @return node* 
 */
node* create(list_value_type value) {
  node* head = (node*) malloc(sizeof(node));

  head->value = value;
  head->next = NULL;

  return head;
}


/**
 * @brief Adds new node to the end of linked list with the provided value
 * 
 * @param list 
 * @param value 
 */
void push(node* list, list_value_type value) {
  assert(list);

  node* head = (node*) malloc(sizeof(node));
  node* current = list;

  while(current->next != NULL) {
    current = current->next;
  }

  head->value = value;
  head->next = NULL;
  current->next = head;
}


/**
 * @brief Adds node to starting of the linked list and moves all the
 *        nodes one step forward
 * 
 * @param list 
 * @param value 
 */
void push_front(node* list, list_value_type value) {
  assert(list);

  printf();

  // node* head = (node *) malloc(sizeof(node));

  // printf("list address: %p\n", list);
  // head->value = value;
  // head->next = list;
  // printf("head address: %p\n", head);

  // *list = &head;
  // printf("new list address: %p\n", list);
}

 
/**
 * @brief Return the value in the nth node of the provided linked list;
 * 
 * @param list pointer to a linked list
 * @param position position of the node to retrive data of
 * @return list_value_type value in the node
 */
list_value_type value_at(node* list, int position) {
  assert(list);

  int i = 0;
  node* current = list;

  if(position == 0) {
    return current->value;
  }

  while(i < position) {
    if(current->next == NULL) {
      printf("Out of bound index.\n");
      abort();
    }
    current = current->next;
    i++;
  }

  return current->value;
};


/**
 * @brief Calculated the size of the given list
 * 
 * @param list 
 * @return int 
 */
int size(node* list) {
  assert(list);

  int count = 0;
  node* current = list;

  while(current) {
    count++;
    current = current->next;
  }

  return count;
}


/**
 * @brief Check if a linked list is empty or not. If empty 0 is returned else 1 is returned.
 * 
 * @param list 
 * @return int 
 */
int empty(node* list) {
  if(list->value == NULL && list->next == NULL) {
    return 1;
  }

  return 0;
}
