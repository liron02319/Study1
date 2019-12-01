 /**
 *Class main
 *
 * @version 28/11/2019
 * @author (Liron Cohen) 
 * 
 */



#include "myBank.h"
#include <stdio.h>



int main()
{
 
       //declaration of variables

static int true=1;

int accountNumber;                     






do{

char x;         //declaration of variable
  printf("\n\nplease enter your Transaction type selection\n");
    scanf(" %c",&x);


switch(x)
{







case 'O': ;

int count=0;          //declaration of variable

   count=counter(count);
      
  openAndSave(count);

break;






case 'B':

             printf("please enter your account number?\n");
             scanf("%d",&accountNumber);       
              checkAccount(accountNumber);
        

      


break;


case 'D': 

             printf("please enter your account number?\n");
             scanf("%d",&accountNumber);       
                   putMoney(accountNumber);   
               

break;






case 'W':  ;


         int temp;                    //declaration of variables
         double moneyWithdrawal;

           printf("Please enter your account number?\n");
             scanf("%d",&accountNumber);                   //checks before give input again
            if( accountNumber>=901 && accountNumber<=950) 
            {
                    temp=checkAccount(accountNumber);
                  if(temp>=1){
                 printf("Please enter a withdrawal amount ?\n");
                  scanf("%lf",&moneyWithdrawal); 
                   if( moneyWithdrawal>=0){
                  cashWithrawal(accountNumber,moneyWithdrawal);}              
                   if(moneyWithdrawal<0){
                   printf("Incorrect number, please enter a positive number\n"); }
                              }
                  
            }
                           
             if(accountNumber<901 || accountNumber>950 ){
               printf("\ntheir is no number of that account on the bank \n");}

            
              


break;





case 'C': 

            printf("Please enter your account number?\n");
             scanf("%d",&accountNumber);  
          
            closeAccount(accountNumber);
       

break;






case 'I':  ;

double interestRate; //declaration of variable


      printf("Please enter the Interest rate to add to all accounts\n");
      scanf("%lf",&interestRate);  
       interestRate=twoDigits(interestRate);
    addInterest(interestRate);

break;








case 'P': 
 
        printAccounts();


break;



case 'E':  ;

      closeAllAccount();
    
       true=0;
break; 






default:   

        printf("\nWrong enter , please try again\n");

break; 


}












 

} 
while(true!=0);

printf("thank you bye bye\n");

}



