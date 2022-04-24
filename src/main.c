#include <stdio.h>
#include "./utilities/utilities.h"

#define N 10

void print_connections(int ids[], int size) {
  int visited[N];

  for (int i = 0; i < N; i++) {
    if(visited[i] != 1) {
      int current_index= i;
      int val_at_i = ids[i];
      
      if(visited[current_index] != 1) {
        visited[current_index] = 1;
        while(ids[current_index] != current_index) {
          printf("%d-", current_index);
          current_index = ids[current_index];
          visited[current_index] = 1;
        }

        printf("%d\n", current_index);
      }
    }
  }
  printf("\n");
}

int find(int arr[], int ind) {
  while(ind != arr[ind]) {
    ind = arr[ind];
  }
  return ind;
}

int is_connected(int arr[], int p, int q) {
  if(find(arr, p) == find(arr, q)) {
    return  1;
  } else {
    return 0;
  }
}

void connect(int arr[], int p, int q) {
  int pid = find(arr, p);
  arr[pid] = find(arr, q);
}

int main() {
  int p, q;
  int id[N];
  int scan = 1;

  for(int i = 0; i < N; i++)
    id[i] = i;

  while(scan) {
    scanf("%d %d", &p, &q);
    int connected = is_connected(id, p, q);

    if(connected == 1) {
      printf("Already connected\n");
      continue;
    }

    connect(id, p, q);
    printf("\n");
    print_connections(id, N);
  }
}
