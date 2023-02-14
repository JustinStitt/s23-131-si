#include <bits/stdc++.h>

int main() {
  // ...
  int* array1 = new int[4];
  array1[0] = 7;
  array1[1] = 8;
  array1[2] = 9;
  array1[3] = 11;

  // array1 = {7 8 9 11}
  int* array2 = new int[8];
  // {0 0 0 0 0 0 0 0 0 0}

  for (int x{}; x < 4; ++x) {
    array2[x] = array1[x];
  }

  return 0;
}

