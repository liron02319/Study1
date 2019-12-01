#ifndef _MYBANK_H_
#define _MYBANK_H_


// a constant definition 
#define N 50
#define M 2

extern double a[N][M];     //declaration of array

// a function prototype for a function exported by library:
double twoDigits(double num);
double calculateInterest(double num,double interest);
int counter(int count) ;
void openAndSave(int count);
int checkAccount(int accountNumber);
void putMoney(int accountNumber);
void cashWithrawal(int accountNumber,double moneyWithdrawal);
void closeAccount(int accountNumber);
void addInterest(double interestRate);
void printAccounts();
void closeAllAccount();

 #endif
