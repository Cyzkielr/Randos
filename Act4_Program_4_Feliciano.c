#include <stdio.h>
#include <string.h>

int main(){
  float gpa;
  int failSub, compUnit, disCase;
  char schoRes[50] = "";

  //input
  printf("Enter GPA: ");
  scanf("%f", &gpa);
  printf("Enter Number of Failed Subjects: ");
  scanf("%d", &failSub);
  printf("Enter Number of Completed Units: ");
  scanf("%d", &compUnit);
  printf("Has Disciplinary Case? (1 = Yes, 0 = No): ");
  scanf("%d", &disCase);

  //conditions
  switch (disCase) {
    case 0:
      if (gpa >= 1.00 && gpa <= 1.50 && failSub == 0 && compUnit >= 24) {
        strcpy(schoRes, "Full Scholarship");
      } else if (gpa > 1.50 && gpa <= 2.00 && failSub <= 1 && compUnit < 24 && compUnit >= 18) {
        strcpy(schoRes, "Partial Scholarship");
      } else {
        strcpy(schoRes, "Not Qualified");
      }
    break;
    case 1:
      strcpy(schoRes, "Disqualified due to Disciplinary Case");
    break;
    default:
      printf("Invalid Input!\n");
    break;
  }

  //output
  printf("\n===== SCHOLARSHIP ASSESSMENT =====\n");
  printf("GPA: %.2f\n", gpa);
  printf("Failed Subjects: %d\n", failSub);
  printf("Completed Units: %d\n", compUnit);
  printf("Scholarship Result: %s\n", schoRes);
  
  
  return 0;
};