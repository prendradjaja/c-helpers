#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "../my_io.h"

#define FIXTURES "./tests/test_my_io.d/"


void test_getc_nonwhitespace() {
  FILE *file;

  file = fopen(FIXTURES "fixture1.txt", "r");
  if (!file) {
    perror(NULL);
    exit(EXIT_FAILURE);
  }
  assert('a' == getc_nonwhitespace(file));
  assert('b' == getc_nonwhitespace(file));
  assert('c' == getc_nonwhitespace(file));
  assert('d' == getc_nonwhitespace(file));
  assert('e' == getc_nonwhitespace(file));
  assert(EOF == getc_nonwhitespace(file));

  file = fopen(FIXTURES "fixture2--whitespace-only.txt", "r");
  if (!file) {
    perror(NULL);
    exit(EXIT_FAILURE);
  }
  assert(EOF == getc_nonwhitespace(file));
}

void test_my_io() {
  test_getc_nonwhitespace();
  puts("Passed: test_my_io.c");
}
