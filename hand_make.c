#include "header.h"

void hand_make(handcard hand[])
{

  int new_mark = (0 + rand() % 4);
  int new_num = (1 + rand() % 13);
  int tmp = 0;

  srand((unsigned int)time(NULL));

  for (int i = 0; i <= 4; i++)
  {
    hand[i].mark = (0 + rand() % 4);
    hand[i].num = (1 + rand() % 13);

    for (int j = 0; j < i; j++)
    {
      if ((hand[j].num == hand[j].num) && (hand[j].mark == hand[i].mark))
      {
        while ((new_num == hand[i].num) && (new_mark == hand[i].mark))
        {
          new_mark = (0 + rand() % 4);
          new_num = (1 + rand() % 13);
        }
        hand[i].num = new_num;
        hand[i].mark = new_mark;
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (hand[i].num > hand[j].num)
      {
        tmp = hand[i].num;
        hand[i].num = hand[j].num;
        hand[j].num = tmp;
      }
    }
  }
}
