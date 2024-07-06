// File name: ExtremeC_exampels_chapter1_15.c
// Description: Example 1.15

#include <stdio.h>

int* create_an_integer(int default_value) {
  int var = default_value;
  return &var;
  // local variable의 address를 return 하였기 때문에 segmentation fault가 발생한다.
  // variable이 저장되지 않은 곳의 address를 나타내는 pointer를 허상 포인터(dangling pointer)라고 한다.
}

int main() {
  int* ptr = NULL;
  ptr = create_an_integer(10);
  printf("%d\n", *ptr);
  return 0;
}
