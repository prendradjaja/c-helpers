#include <stdio.h>
#include "test_vector.h"
#include "test_grid.h"
#include "test_my_io.h"


int main() {
  test_vector();
  test_grid();
  test_my_io();
  puts("All tests passed!");
}
