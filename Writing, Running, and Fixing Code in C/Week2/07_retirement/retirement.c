#include <stdlib.h>
#include <stdio.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

double calculate_balance(double current_balance,retire_info info){ //Function to calculate new balance.
  double amt_gained= current_balance*info.rate_of_return;
  double new_balance=info.contribution+(current_balance+amt_gained);
  return new_balance;}

void print_balance(int Age,double balance){//Funtion to print balance.
  printf("Age %3d month %2d you have $%.2lf\n",Age/12,Age%12,balance);}

double calculate_balance_all_months(int Age, double balance, retire_info info){//function to calculate balance per month.
  while (info.months){
    print_balance(Age,balance);
    balance=calculate_balance(balance,info);
    Age+=1;
    info.months-=1;
  }
  return balance;
}
void retirement(int startAge,double initial,retire_info working,retire_info retired){// Function to calculate information for working and retirement.
  int retirementAge= startAge + working.months;
  double balanceAtRetirement= calculate_balance_all_months(startAge,initial,working);
  calculate_balance_all_months(retirementAge,balanceAtRetirement,retired);
}

int main(void){
  retire_info working;
  retire_info retired;
  int startAge =327;
  double initial =21345.0;

  //instancising values
  working.months =489;
  working.contribution=1000.0;
  working.rate_of_return=0.045/12.0;
  
  retired.months =384;
  retired.contribution=-4000.0;
  retired.rate_of_return=0.01/12.0;

  retirement(startAge,initial,working,retired);

  return EXIT_SUCCESS;
}
  
