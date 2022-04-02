#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

typedef struct node node;
typedef int list_value_type;

node* create(list_value_type);

void push(node*, list_value_type);
void push_front(node**, list_value_type);

void insert(node**, int, int);

list_value_type pop(node*);
list_value_type pop_front(node**);

list_value_type value_at(node*, int);

int size(node*);
int empty(node*);

void reverse(node**);

#endif