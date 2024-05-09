
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int sum(int k);

int main() {
  int result = sum(8);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k != 0)
    return k * sum(k - 1);
  else
      return 1;
}