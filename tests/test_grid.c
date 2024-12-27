#include <assert.h>
#include <stdio.h>
#include "../grid.h"


void test_grid() {
  char data[] = {
    1, 2, 3,
    4, 5, 6,
    7, 8, 9,
    10, 11, 12,
  };
  Grid g = { 4, 3, data };

  // Test get_item()
  assert(8 == get_item(g, 2, 1));

  // Test set_item()
  char new_value = -1;
  set_item(g, 2, 1, new_value);
  assert(new_value == get_item(g, 2, 1));

  puts("Passed: test_grid.c");
}
