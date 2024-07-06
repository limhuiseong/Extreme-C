// File name: ExtremeC_exampels_chapter1_13.c
// Description: Example 1.13

#include <stdio.h>

int main(int argc, char** argv) {
 int var = 9;
 int* ptr = &var;
 void* gptr = ptr;
 // 자료형이 void인 pointer는 generic pointer이다.
 
 printf("%d\n", *gptr);
 // 컴파일러는 generic pointer를 dereferencing 하는 것을 허용하지 않는다.
 
 return 0;
}
