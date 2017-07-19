#include "stdio.h"
#include "defs.h"
#include "init.c"
#include "bitboards.c"


int main() {

  AllInit();

  U64 playBitBoard = 0ULL;

  printf("start:\n\n");
  PrintBitBoard(playBitBoard);

  playBitBoard |= (1ULL << SQ64(D2));
  printf("D2 Added: \n\n");
  PrintBitBoard(playBitBoard);

  playBitBoard |= (1ULL << SQ64(G5));
  printf("G5 Added: \n\n");
  PrintBitBoard(playBitBoard);

  printf("\n\n");

  int count = CNT(playBitBoard);

  printf("Count:%d\n\n", count);

  int index = POP(&playBitBoard);
  printf("index:%d\n", index);
  PrintBitBoard(playBitBoard);
  count = CNT(playBitBoard);
  printf("Count:%d\n\n", count);

  return 0;
}
