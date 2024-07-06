// File name: ExtremeC_exampels_chapter1_4.c
// Description: Example 1.4

#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
  char NAME ## _cmd[256]  = ""; \
  strcpy(NAME ## _cmd, #NAME);
// # 연산자는 매개변수를 한 쌍의 따옴표로 감싼 문자 형태로 반환한다.
// ## 연산자는 다른 요소와 결합해 변수명을 만든다.

int main(int argc, char** argv) {

  CMD(copy)
  CMD(paste)
  CMD(cut)

  char cmd[256];
  scanf("%s", cmd);

  if (strcmp(cmd, copy_cmd) == 0) {
    // ...
  }
  if (strcmp(cmd, paste_cmd) == 0) {
    // ...
  }
  if (strcmp(cmd, cut_cmd) == 0) {
    // ...
  }

  return 0;
}
