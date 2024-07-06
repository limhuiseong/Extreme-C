// File name: ExtremeC_exampels_chapter1_9.c
// Description: Example 1.9

int main(int argc, char** argv) {
  int var = 100;
  int* ptr = 0;
  // 값이 0인 pointer는 null pointer이다.
  ptr = &var;
  // &은 참조 연산자(reference operator)로 변수의 주소를 가져온다.
  *ptr = 200;
  // *은 역참조 연산자(dereference operator)로 pointer가 가리키는 주소에 접근한다.
  return 0;
}
