#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct handcard
{
  int num;
  int mark;
} handcard;

void hand_make(handcard handcard[]);
int poker_judge(handcard handcard[]);
void card_print(handcard handcard[]);
void result_print(int res);
void change_hand(handcard handcard[], int number[], int change_num);
