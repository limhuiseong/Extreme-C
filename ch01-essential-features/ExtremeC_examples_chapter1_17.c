// File name: ExtremeC_exampels_chapter1_17.c
// Description: Example 1.17

#include <stdio.h>

void func(int a) {
  // C에는 참조에 의한 전달이 없다.
  // 항상 값에 의한 전달이 이루어지는데 이를 피하기 위해서 pointer에 의한 전달을 사용하면 된다.
  a = 5;
}

int main(int argc, char** argv) {
  int x = 3;
  printf("Before function call: %d\n", x);
  func(x);
  printf("After function call: %d\n", x);
  return 0;
}
