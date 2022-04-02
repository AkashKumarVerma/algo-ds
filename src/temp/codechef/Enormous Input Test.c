  #include <stdio.h>

  int main() {
    int n = 0;
    int k = 0;

    int count = 0;
    int num = 0;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
      scanf("%d", &num);

      if(num % k == 0) {
        count = count + 1;
      }
    }

    printf("%d", count);
    return 0;
  }



