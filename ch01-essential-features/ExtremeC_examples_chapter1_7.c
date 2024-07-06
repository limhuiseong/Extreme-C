// File name: ExtremeC_exampels_chapter1_7.c
// Description: Example 1.7

#define CONDITION
// CONDITION1이 지정하는 값은 없지만 정의되었다.

int main(int argc, char** argv) {
#ifdef CONDITION
  int i = 0;
  i++;
#endif
  int j= 0;  
  return 0;
}

// 조건부 컴파일
// #ifdef X: X가 define되어 있다면 컴파일
// #ifndef X: X가 define되어 있지 않다면 컴파일

// gcc -D로 소스 코드 바깥에서 매크로를 정의할 수 있다.
// ex) gcc -DCONDITION, gcc -DDEBUG
