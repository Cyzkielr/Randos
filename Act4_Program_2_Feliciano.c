#include <stdio.h>

int main(){
  float bsalary, overrate, overhour, overpay, gsalary, deduc, nsalary, drate;

  //input
  printf("Enter Basic Salary: ");
  scanf("%f", &bsalary);
  printf("Enter Overtime Hours: ");
  scanf("%f", &overhour);
  printf("Enter Overtime Rate per Hour: ");
  scanf("%f", &overrate);

  //computations
  overpay = overhour * overrate;
  gsalary = bsalary + overpay;

  //conditions
  if(gsalary > 50000){
    drate = 15;

    deduc = (drate/100) * gsalary;
  } else if(gsalary > 30000 && gsalary <= 50000){
    drate = 10;

    deduc = (drate/100) * gsalary;
  } else if(gsalary <= 30000){
    drate = 5;

    deduc = (drate/100) * gsalary;
  }

  nsalary = gsalary - deduc;

  //output
  printf("\n===== EMPLOYEE SALARY SUMMARY =====\n");
  printf("Basic Salary: %.2f\n", bsalary);
  printf("Overtime Pay: %.2f\n", overpay);
  printf("Gross Salary: %.2f\n", gsalary);
  printf("Deduction Rate: %.0f%%\n", drate);
  printf("Deduction: %.2f\n", deduc);
  printf("Net Salary: %.2f", nsalary);
  
  return 0;
}