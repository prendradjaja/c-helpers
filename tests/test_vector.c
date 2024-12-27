#include <assert.h>
#include <stdio.h>
#include "../vector.h"


void test_add() {
  Vector v1 = { 1, 2 };
  Vector v2 = { 3, 4 };

  Vector sum = add(v1, v2);
  assert(sum.r == 4);
  assert(sum.c == 6);
}

void test_vector() {
  test_add();
  puts("Passed: test_vector.c");
}
