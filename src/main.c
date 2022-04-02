#include <stdio.h>
#define N 10

void printArray(int[]);

void printArray(int arr[]) {
  int i, j;
  int positions[N] = {0};
  int connections[N][N] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
  
  for(i = 0; i < N; i++) {
    positions[arr[i]] = positions[arr[i]] + 1;
    connections[arr[i]][positions[arr[i]] - 1] = i;
  }

  i = 0;
  j = 0;

  printf("\n");

  for(i = 0; i < N; i++) {
    if(positions[i] > 1) {
      for(j = 0; j < N; j++) {
        if(j == 0) {
          printf("%d", connections[i][j]);
        } else {
          int val = connections[i][j];
          if(j != 0 && val > 0) {
            printf(" --> %d", connections[i][j]);
          }
        }
      }
      printf("\n");
    }
  }
  printf("\n");
}

int main() {
  int p, q;
  int id[N];

  for(int i = 0; i < N; i++)
    id[i] = i;

  int scan = 1;

  while(scan) {
    scanf("%d %d", &p, &q);

    if(id[p] == id[q])
      printf("%d and %d are already connected\n", p, q);

    int t = id[p];

    for (int i = 0; i < N; i++) {
      if(id[i] == t) {
        id[i] = id[q];
      }
    }

    printArray(id);
  }
}