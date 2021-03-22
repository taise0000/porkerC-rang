#include "header.h"

void card_print(handcard handcard[])
{

  char suit[4] = {'s', 'h', 'd', 'c'};

  for (int i = 0; i < 5; i++)
  {
    if (handcard[i].num == 14)
      handcard[i].num = 1;
  }

  printf("\n[Your hand]\n");

  for (int i = 0; i < 5; i++)
  {
    if (handcard[i].num >= 10)
      printf("------  ");
    else
      printf("-----  ");
  }

  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    printf("|%c %d|  ", suit[handcard[i].mark], handcard[i].num);
  }

  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    if (handcard[i].num >= 10)
      printf("------  ");
    else
      printf("-----  ");
  }

  printf("\n");
}
