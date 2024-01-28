// performance allowance = 12.5% of basic salary
// ecpence allowaance = 20% of basic salary
// provident fund deducted = 8% basi salary
//  task deducted = 2% after provident fund deduction
// net salary after all the deduction = ?

#include <stdio.h>
int main() {
  float baseSalary, performanceAllowance, expenseAllowance, providentFund,
      taxableSalary, tax, netSalary;
  printf("Enter basic salary : ");
  scanf("%f", &baseSalary);
  performanceAllowance = (12.5 / 100) * baseSalary;
  expenseAllowance = (20 / 100) * baseSalary;
  providentFund = (8 / 100) * baseSalary;
  taxableSalary =
      baseSalary + performanceAllowance + expenseAllowance - providentFund;
  tax = (2 / 100) * taxableSalary;
  netSalary = taxableSalary - tax;
  printf(" Net salary of the employee is  %f /n ", netSalary);
  return 0;
}