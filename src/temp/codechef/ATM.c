  #include <stdio.h>

  int main() {
    int x;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);
    
    if(x < 5) {
      printf("%.2f", y);
      return 0; 
    }

    int rmd = x % 5;
    float transactionCharge = 0.50;
    float afterTransaction = y - transactionCharge;

    if(rmd > 0) {
      printf("%.2f", y);
      return 0; 
    }

    if(x > afterTransaction) {
      printf("%.2f", y);
      return 0; 
    }

    float remaning = y - x - transactionCharge;
    printf("%.2f", remaning);

    return 0;
  }



