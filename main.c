#include "myBank.h"
#include <stdio.h>
int main()
{
	char opt;
   	int num =0;
   	int amount;
   	double interest;
   	int num_acc;
   	do
   	{
	printf("Option:\nO-Open new account\n");
	printf("B-Clarification of account balance\nD-Deposit amount into account\n");
	printf("W-Withdrawing money from acount\nC-Closing a current account\nI-Adding interest to open accounts \n");	
   	printf("P-Print all open accounts and the balance in them \nE-Closing all accounts and exiting the program:\n");	
    
	scanf(" %c", &opt);	
   	switch(opt)
    {
        case 'O':
        printf("Enter initial amount:  \n");
        scanf("%d",&amount);
        openAccount(amount);   
        break;
        
        
        case 'B':
        printf("Enter an account number:  \n");
        scanf("%i", &num_acc);
        balance(num_acc);
        break;
       
       
        case 'D':
        printf("Enter account number and deposit amount:  \n");
        scanf("%i %d",&num_acc,&amount);
        deposit(num_acc,amount);
            break;
        
        
        case 'W':
        printf("Enter account number and withdrawal amount:  \n");
        scanf("%i%d",&num_acc,&amount);
        withdraw(num_acc,amount);
            break;
       
       
        case 'C':
 		printf("Enter an account you would like to close:  \n");
        scanf("%i",&num_acc);
        closeAccount(num_acc);
        break;
       
       
        case 'I':
        printf("Enter interest on all accounts:  \n");
        scanf("%le",&interest);
        addDependInterest(interest);   
        break;
       
       
        case 'P':
        printf("All accounts currently open: \n");
        printall();   
        break;


        case 'E':
        closeAllAccounts();
        num = 1 ;
        break;

       
        default:
        printf("Error! Invalid action, Please try again");
   		break;
   		 }	
   }  while (num==0);
    
return 0;
}
