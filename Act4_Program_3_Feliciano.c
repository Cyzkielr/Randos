#include <stdio.h>
#include <string.h>

int main(){
  float purAmount, drate, disc, fAmount;
  int member;
  char mem[50] = "";

  //input
  printf("Enter Purchase Amount: ");
  scanf("%f", &purAmount);
  printf("Are you a member? (1 = Yes, 0 = No): ");
  scanf("%d", &member);

  //conditions
  switch (member) {
    case 1:
      strcpy(mem, "Member");
      if (purAmount >= 5000) {
        drate = 15;
      } else if (purAmount < 5000) {
        drate = 10;
      }
    break;
    case 0:
      strcpy(mem, "Non-Member");
      if (purAmount >= 5000) {
        drate = 5;
      } else if (purAmount < 5000) {
        drate = 0;
      }
    break;
    default:
      printf("Invalid Input!\n");
    break;
  }

  //calculation
  disc = (drate/100) * purAmount;
  fAmount = purAmount - disc;

  //output
  printf("\n===== SHOPPING DISCOUNT SUMMARY =====\n");
  printf("Purchase Amount: %.2f\n", purAmount);
  printf("Membership: %s\n", mem);
  printf("Discount Rate: %.0f%%\n", drate);
  printf("Discount: %.2f\n", disc);
  printf("Final Amount: %.2f\n", fAmount);
  
  
  return 0;
}