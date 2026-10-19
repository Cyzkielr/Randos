#include <stdio.h>
#include <string.h>

int main(){
  float gpa;
  int failSub;
  char classification[50] = "";
  
  //input
  printf("Enter GPA: ");
  scanf("%f", &gpa);
  printf("Enter number of failed subjects: ");
  scanf("%d", &failSub);

  //conditions
  if (gpa >= 1.00 && gpa <= 1.50 && failSub == 0) {
    strcpy(classification, "Excellent");
  } else if (gpa > 1.50 && gpa <= 2.50 && failSub <= 1) {
    strcpy(classification, "Good Standing");
  } else if (gpa > 2.50 && gpa <= 3.00 && failSub >= 0) {
    strcpy(classification, "Conditional Standing");
  } else {
    strcpy(classification, "Academic Probation");
  }

  //output
  printf("\n===== STUDENT ACADEMIC CLASSIFICATION =====\n");
  printf("GPA: %.2f\n", gpa);
  printf("Failed Subjects: %d\n", failSub);
  printf("Academic Classification: %s\n", classification);
  
  return 0;
}