#include "header.h"

int main(){

  int result,ch_num = 0;
  char choice = ' ';

  handcard hand_card[5];

  hand_make(hand_card);
  result = poker_judge(hand_card);
  card_print(hand_card);
  result_print(result);

  printf("手札を2回まで交換することが出来ます。\n");

  printf("手札を交換しますか？ [y or n]\n> ");

  while ((choice != 'y') && (choice != 'n'))
      scanf("%c", &choice);

  if(choice == 'y'){
    printf("\n何枚のカードを交換しますか？\n>");
    scanf("%d", &ch_num);
    int ch_card[ch_num];
    for (int i = 0; i < ch_num; i++){
      printf("\n交換するカード%d枚目は左から何番目ですか？\n>",i + 1);
      scanf("%d",&ch_card[i]);
      ch_card[i] -= 1;
    }
    change_hand(hand_card,ch_card,ch_num);
  }

  result = poker_judge(hand_card);
  card_print(hand_card);
  result_print(result);

  printf("手札を交換しますか？ [y or n]\n> ");
  scanf("%c", &choice);
  while ((choice != 'y') && (choice != 'n'))
    scanf("%c", &choice);

  if (choice == 'y')
  {
    printf("\n何枚のカードを交換しますか？\n>");
    scanf("%d", &ch_num);
    int ch_card[ch_num];
    for (int i = 0; i < ch_num; i++)
    {
      printf("\n交換するカード%d枚目は左から何番目ですか？\n>", i + 1);
      scanf("%d", &ch_card[i]);
      ch_card[i] -= 1;
    }
    change_hand(hand_card, ch_card, ch_num);
  }

  result = poker_judge(hand_card);
  card_print(hand_card);
  result_print(result);
  return 0;
}
