#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked_list.h"

int main() {
  int  value, popped_value, new_value;
  int  list_size;
  node list;

  list  = create_llist(1);

  push_back(list, 2);
  push_back(list, 3);
  push_back(list, 4);
  push_back(list, 10);

  list = pop_front(list);
  // popped_value = pop_front(list);
  // new_value = value_at(list, 1);

  // printf("popped value is %d \n", popped_value);
  // printf("new value is %d \n", new_value);

  return 0;
}
