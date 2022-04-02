#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "linked_list.h"


struct _node {
  value_type data;
  node next;
};


node create_llist(value_type value) {
  node head = (node) malloc(sizeof(struct _node));
  node second = (node) malloc(sizeof(struct _node));
  node third = (node) malloc(sizeof(struct _node));

  if(head == NULL) {
    fprintf(stderr, "Not enough memory.");
    abort();
  }

  head->data = value;
  head->next = NULL;

  return head;
}


void push_back(node n, value_type value) {
  assert(n);

  int count = 1;
  node head = (node) malloc(sizeof(struct _node));

  node current_node = n;
  node next_node    = n->next;

  while(next_node != NULL) {
    count++;
    current_node = next_node;
    next_node    = next_node->next;
  }

  head->data = value;
  head->next = NULL;

  current_node->next = head;
}


value_type value_at(node n, int index) {
  assert(n);

  int  current_index = 1;
  node current_node  = n;

  
  while(current_index < index) {
    if(current_node == NULL) {
      printf("Out of bound index \n");
      abort();
    }

    current_index++;
    current_node = current_node->next;
  }

  return current_node->data;
}


int size(node n) {
  assert(n);
  int count = 1;
  node next_node = n->next;

  while(next_node != NULL) {
    printf("Hello %d", count);
    count++;
  }

  return count;
}


// _Bool empty(node n) {
//   assert(n);
//   printf("Hellllo oooo %d", n->data);
//   if(n->data == NULL && n->next == NULL) {
//     return true;
//   }

//   return false;
// }


value_type pop_front(node n) {
  assert(n);
  printf("%d\n", n);
  printf("%d\n", n->next);
  // value_type value = n->data;
  // printf("Value at head %d\n", n->data);
  // printf("Value at next node %d\n", n->next->data);

  // node next_node = n->next;
  // n = next_node;
  // printf("Value at new head %d\n", n->data);

  return 0;
}