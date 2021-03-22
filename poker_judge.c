#include "header.h"

int poker_judge(handcard handcard[])
{

  int first_mark = handcard[0].mark;
  int first_num = handcard[0].num;
  int fr_frag, st_frag, pa_frag = 0;
  int pair[5] = {0, 0, 0, 0, 0};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if ((handcard[i].num == handcard[j].num) && (i != j))
        pair[i] += 1;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    if (pair[i] == 3)
      return 7;
    else if (pair[i] == 2)
      pa_frag += 3;
    else if (pair[i] == 1)
    {
      pa_frag += 1;
    }
  }

  if (pa_frag == 2)
    return 1;
  else if (pa_frag == 4)
    return 2;
  else if (pa_frag == 9)
    return 3;
  else if (pa_frag == 13)
    return 6;

  for (int i = 0; i < 5; i++)
  {
    if (first_mark == handcard[i].mark)
    {
      fr_frag += 1;
    }
  }

  for (int i = 0; i < 5; i++, first_num++)
  {
    if (first_num == handcard[i].num)
    {
      st_frag += 1;
    }
  }

  if (st_frag == 5)
  {
    if (fr_frag == 5)
      if (handcard[0].num == 10)
        return 9;
      else
        return 8;
    else
      return 4;
  }
  else if (fr_frag == 5)
    return 5;

  return 0;
}
