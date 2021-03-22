#include "header.h"

void change_hand(handcard handcard[], int number[], int change_num)
{

  int new_num = (1 + rand() % 13);
  int new_mark = (0 + rand() % 4);
  int tmp = 0;

  for (int i = 0; i < change_num; i++)
  {
    handcard[number[i]].mark = (0 + rand() % 4);
    handcard[number[i]].num = (2 + rand() % 13);
    for (int j = 0; j < i; j++)
    {
      if ((handcard[j].num == handcard[i].num) && (handcard[j].mark == handcard[i].mark))
      {
        while ((new_num == handcard[i].num) && (new_mark == handcard[i].mark))
        {
          new_num = (2 + rand() % 13);
          new_mark = (0 + rand() % 4);
        }
        handcard[number[i]].mark = new_mark;
        handcard[number[i]].num = new_num;
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (handcard[i].num > handcard[j].num)
      {
        tmp = handcard[i].num;
        handcard[i].num = handcard[j].num;
        handcard[j].num = tmp;
      }
    }
  }
}
