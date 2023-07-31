#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int i = 0;
  int numbers[5];

  while (i < 5) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
    i++;
  }

  i = 0;
  while (i < 5) {
    int factorial_of_number = factorial(numbers[i]);
    printf("The factorial of number %d is %d\n", i + 1, factorial_of_number);
    i++;
  }

  return 0;
}
