#include "stdio.h"
#include "defs.h"
#include "init.c"


int main() {

  AllInit();

  int num = 4;
  int david = 30;

  ASSERT(num == david);
/*
  int index = 0;

  for(index = 0; index < BRD_SQ_NUM; ++index) {
    if(index % 10 == 0) printf("\n");
    printf("%5d", Sq120ToSq64[index]);
  }

  printf("\n");
  printf("\n");

  for(index = 0; index < 64; ++index) {
    if(index % 8 == 0) printf("\n");
    printf("%5d", Sq64ToSq120[index]);
  }

  printf("\n");
  printf("\n");

  */

  return 0;
}
