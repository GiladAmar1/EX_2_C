#ifndef _MYBANK_H_
#define _MYBANK_H_
extern double accounts[50][2] ;
void openAccount(double amount);
void balance(int acc_num);
void deposit(int acc_num ,double amount);
void withdraw(int acc_num ,double amount);
void closeAccount(int acc_num);
void addDependInterest(double interest);
void printall();
void closeAllAccounts();
#endif
