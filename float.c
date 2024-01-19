#include <stdio.h>

int main() {
  float subtotal;
  float tax = .09;
  printf("How much are your groceries? ");
  scanf("%f", &subtotal);
  printf("What is your tax rate? ", tax);
  scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
