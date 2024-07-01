// File name: ExtremeC_exampels_chapter1_1.c
// Description: Example 1.1

#define ABC 5
// #undef ABC
// #undef 지시자는 매크로 정의를 제거한다.

int main(int argc, char** argv) {
  int x = 2;
  int y = ABC;
  int z = x + y;
  return 0;
}
