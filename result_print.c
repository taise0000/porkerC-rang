#include "header.h"

void result_print(int res)
{
  if (res == 0)
    printf("\nあなたの役は [無し] です。\n");
  else if (res == 1)
    printf("\nあなたの役は [ワンペア] です。\n");
  else if (res == 2)
    printf("\nあなたの役は [ツーペア] です。\n");
  else if (res == 3)
    printf("\nあなたの役は [スリーカード] です。\n");
  else if (res == 4)
    printf("\nあなたの役は [ストレート] です。\n");
  else if (res == 5)
    printf("\nあなたの役は [フラッシュ] です。\n");
  else if (res == 6)
    printf("\nあなたの役は [フルハウス] です。\n");
  else if (res == 7)
    printf("\nあなたの役は [フォーカード] です。\n");
  else if (res == 8)
    printf("\nあなたの役は [ロイヤル・ストレート] です。\n");
  else if (res == 9)
    printf("\nあなたの役は [ロイヤル・ストレート・フラッシュ] です。\n");
}
