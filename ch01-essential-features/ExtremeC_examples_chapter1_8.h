// File name: ExtremeC_exampels_chapter1_8.c
// Description: Example 1.8

// #ifndef는 헤더 가드로 사용할 수 있다.
// 다음과 같이 사용하면 double inclusion을 피할 수 있다.
// 다른 방법으로 #pragma once가 있다.
// 하지만 C 표준이 아니므로 portability가 필요할 때는 #ifndef를 헤더 가드로 사용하는 편이 좋다.
#ifndef EXAMPLE_1_8_H
#define EXAMPLE_1_8_H

void say_hello();
int read_age();

#endif
