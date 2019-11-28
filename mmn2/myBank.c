
#include "myBank.h"
#include <stdio.h>
           



/* 
twoDigits function

Shortens a number with more than 2 digits after the point
*/


double twoDigits(double num)              
{
    num=num*100; 
    num=(int)num;  
    num=(double)num;  
    num=num/100;                  

return num;
}





/* 
counter function


Counts how many accounts there are.
*/


int counter(int count) 
{

    int i,j;              //declaration of variables

    for(i=0;i<50;i++)
     {
         for(j=1;j<2;j++)
            {
            if(a[i][j]==1){
                 count++;}
             }
     }
         return count;  
}



/* 
openAndSave function

Opening an account and saving the initial deposit amount.
Prints the new account number.
Opening an account is only possible if there are less than 50
Open accounts.

*/

void openAndSave(int count)
{

int i,j;               //declaration of variables
int temp=0;
double tempAmmout;

 if(count==50){
printf("the bank are full\n");}



  else if(count<50)
   {

       for(i=0;i<50 && temp==0;i++)
         {
            for(j=1;j<2 && temp==0;j++)
            {
            if(a[i][j]!=1) {
             printf("please enter your Initial deposit?\n");
             scanf("%lf",&tempAmmout);   
             tempAmmout=twoDigits(tempAmmout);
              a[i][j-1]=tempAmmout;
               a[i][j]=1; 
            printf("\nyour number bank is %d and your balance is %.2lf \n",i+901,a[i][j-1]); 
               
                 temp++;}

             }
           
          }
    }
   
 
}


/* 
checkAccount function

Check your balance, get the account number and print
The balance.
This action is only allowed if the account is open.
*/


int checkAccount(int accountNumber)
{
 
int temp=0;  //declaration of variable
if(accountNumber>=901 && accountNumber<=950)
     {

 int i;                    //declaration of variable
 
        
           for(i=0;i<50 && temp==0;i++)
           {  
              if(a[i][1]==1 && i+901==accountNumber ){
                 printf("\nThe ammount in your account %d is %.2lf\n",i+901,a[i][0]);
                     temp++;}
                     
           } 

  if(temp==0 && accountNumber>=901 && accountNumber<=950){
        printf("\ntheir is not open account with that number\n");}
                            
      }

else if(accountNumber<901 || accountNumber>950 ){
        printf("\ntheir is no number of that account on the bank \n");}




    return temp;


}
  



/* 
putMoney function

Deposit, accepts the account number and prints the
The new balance.
This action is only allowed if the account is open.
*/    

void putMoney(int accountNumber)
{

int temp=0;                 //declaration of variable

 if( accountNumber>=901 && accountNumber<=950) 
  {
double tempSum;
 int i;                      //declaration of variables
double tempSum2;



        
           for(i=0;i<50 && temp==0;i++)
           {  
              if(a[i][1]==1 && i+901==accountNumber ){
                 printf("at your account number %d have %.2lf\nWhat is the amount DO you want to deposit?\n",i+901,a[i][0]);
                  tempSum=a[i][0];
                  scanf("%lf",&tempSum2);
               if(tempSum2>=0){

                    a[i][0]=twoDigits(tempSum2);
                  a[i][0]= a[i][0]+tempSum;
                     temp++;
      printf("\nsuccess,to the account %d  have now %.2lf\n",i+901,a[i][0]);}
           
               if(tempSum2<0){
         printf("Incorrect number, please enter a positive number" ); 
           temp++; }
                                                      }
                      
           } 
                     
           
     if(temp==0 && accountNumber>=901 && accountNumber<=950){
        printf("\ntheir is not open account with that number\n");}

   }



 else if(accountNumber<901 || accountNumber>950 ){
        printf("\ntheir is no number of that account on the bank \n");}


                            
     
}






/* 
cashWithrawal function

Withdraw, get the account number and print out
The new balance.
This action is only allowed if the account is open and there are
Enough cash to pull
*/

void cashWithrawal(int accountNumber,double moneyWithdrawal)
{
   int i;
   int temp=0;               //declaration of variables
   
        
           for(i=0;i<50 && temp==0;i++)
           {  
              if(a[i][1]==1 && i+901==accountNumber )
                 { 
                      temp++;
                      if(a[i][0]>=moneyWithdrawal){

                             a[i][0]=a[i][0] - ( twoDigits(moneyWithdrawal) );   
                             printf("\nsuccess,to the account %d  have now %.2lf\n",i+901,a[i][0]); }

                     else{   printf("\n their is Not enough money to pull\n");  }
                        
                  }  
                                
            }     
                     
       
         if(temp==0){    printf("\ntheir is no open account with that number\n");}
     

}



/* 
closeAccount function

Account Closing.
Only allowed if the account is open.
*/

 
void closeAccount(int accountNumber)
{


  if( accountNumber>=901 && accountNumber<=950) 
   {
     int i;
      int temp=0;                    //declaration of variables


        
           for(i=0;i<50 && temp==0;i++)
           {  
              if(a[i][1]==1 && i+901==accountNumber ){
                     a[i][1]=0;
                     a[i][0]=0;                                     
                     temp++;
                       printf("\nyour account are closed now"); }                                    
           } 
                      
      if(temp==0 && ( accountNumber>=901 && accountNumber<=950 ) ){
        printf("\ntheir is no open account with that number\n");}


    }


 else if(accountNumber<901 || accountNumber>950 ){
               printf("\ntheir is no number of that account on the bank \n");}



}




/* 
addInterest function

Add interest at a given percentage rate for all accounts
Open
*/

void addInterest(double interestRate)
{

int temp=0;
int i,j;                //declaration of variables

if(interestRate>0)
     {
               
         for(i=0;i<50 ;i++)
          {
            for(j=1;j<2 ;j++)
            {
                 if(a[i][j]==1)
                   {
                     a[i][j-1]=calculateInterest( a[i][j-1],interestRate );
                      temp++;
                    }   
             }
          }
      }

 else{   printf("\nA negative number cannot represent interest\n"); }
               

       if(temp>=1){
                printf("\nsuccess,Interest has been added to the all open accounts\n");}


     if(temp==0 && interestRate>0 ){
          printf("\ntheir is no open accounts\n"); }

         
}




/* 
calculateInterest function


calculate and Adds the required interest rate to the account
*/


double calculateInterest(double num,double interest)      
{

     num = num * (1 + (interest/100));

     return num;
}










/* 
printAccounts function


Print all open accounts and balance.
*/

void printAccounts()
{
                        //declaration of variables
int temp=0;
int i,j;
          for(i=0;i<50 ;i++)
         {
             for(j=1;j<2 ;j++)
            {
                 if(a[i][j]==1)
                {         
                      temp++;
                    if(temp==1){
                   printf("\nThe open accounts are:");}

                  printf("\n Account %d with the ammount %.2lf ",i+901,a[i][0]);
                 }
            }    
         }

         if(temp==0){  
            printf("\ntheir is no open accounts"); }


}




/* 

closeAllAccount function


Close all accounts and exit the program.
*/


void closeAllAccount()
{
   
  int i;             //declaration of variable

  for(i=0;i<50;i++)
  {  
              if(a[i][1]==1 )
                 {
                     a[i][1]=0;
                     a[i][0]=0;}
                 
   }                 
        
    printf("\nAll your accounts are closed now\n");  
  

}






