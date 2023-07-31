#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int numbers[5];
  int i;

  for (i = 0; i < 5; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  for (i = 0; i < 5; i++) {
    int factorial_of_number = factorial(numbers[i]);
    printf("The factorial of number %d is %d\n", i + 1, factorial_of_number);
  }

  return 0;
}
