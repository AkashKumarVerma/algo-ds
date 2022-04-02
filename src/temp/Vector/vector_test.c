#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vector/vector.h"

int main() {
  vector v;
  v = vector_create();
  for(int i = 0; i < 100000; i++) {
    vector_add(v, i);
    assert(vector_size(v) == i+1);
    assert(vector_get(v, i) == i);
  }

  assert(vector_size(v) == 100000);

  while(!vector_is_empty(v)) {
    vector_remove_at(v, vector_size(v)-1);
  }

  assert(vector_is_empty(v));
  assert(vector_size(v) == 0);

  vector_destroy(v);

  printf("> Test succesfull. \n");
  printf("Press any key to close.");
  getch();
  return 0;
}
