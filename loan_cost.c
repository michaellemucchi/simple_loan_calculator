#include <stdio.h>
#include <math.h>


int main() {
  double amtBorrowed;
  double InterestRate;
  int numPayments;
  double TotalCost;
  double Difference;
  double MonthlyCost;

  printf("Please enter the amount of money you borrowed: $");
  scanf("%lf", &amtBorrowed);
  printf("Please enter the annual interest rate: ");
  scanf("%lf", &InterestRate);
  printf("Please enter the number of payments to be made: ");
  scanf("%d", &numPayments);

  MonthlyCost = (InterestRate / 12 * amtBorrowed) / (1 - (1 / (pow(1 + (InterestRate / 12), numPayments))));
  TotalCost = MonthlyCost * numPayments;
  Difference = TotalCost - amtBorrowed;

  printf("A loan of $%.2f with an annual interest of %.2f payed off over %d months will have monthly payments of $%.2f.\n", amtBorrowed, InterestRate, numPayments, MonthlyCost);
  printf("In total you will pay $%.2f, making the cost of your loan $%.2f.\n", TotalCost, Difference);

  return 0;
}
