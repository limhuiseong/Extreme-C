// File name: ExtremeC_exampels_chapter1_16.c
// Description: Example 1.16

#include <stdio.h>
#include <stdlib.h>

int* create_an_integer(int default_value) {
  int* var_ptr = (int*)malloc(sizeof(int));
  *var_ptr = default_value;
  return var_ptr;
  // Heap memory를 할당하고 이 address를 return 하였으므로 에러가 발생하지 않는다.
}

int main() {
  int* ptr = NULL;
  ptr = create_an_integer(10);
  printf("%d\n", *ptr);
  free(ptr);
  return 0;
}
