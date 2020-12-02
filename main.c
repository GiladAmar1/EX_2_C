#include "myBank.h"
#include <stdio.h>
int main()
{
	char opt;
   	int num=0;
   	int amount;
   	double interest;
   	int num_acc;
   	int flag1;
   	int flag2;
   	do
   	{
	printf("Please choose a transaction type:\nO-Open Account\n");
	printf("B-Balance Inquiry\nD-DDeposit\n");
	printf("W-Withdrawal\nC-Close Account\nI-Interest\n");	
   	printf("P-Print\nE-Exit\n");	
    
	scanf("%c", &opt);	
   	switch(opt)
    {
        case 'O':
        printf("Please enter amount for deposit:");
        flag1=scanf("%d",&amount);
        if(flag1==0)
        {printf("Failed to read the amount\n");
        break;
        }
        if(amount<=0){printf("Failed to read the amount\n");
        break;
        }
        openAccount(amount);   
        break;
        
        
        case 'B':
        printf("Please enter account number:\n");
        flag2=scanf("%i", &num_acc);
        if(flag2==0)
        {printf("Failed to read the account number\n");
        break;
        }
        if(num_acc<=0){printf("Failed to read the account number\n");
        break;
        }
        balance(num_acc);
        break;
       
       
        case 'D':
        printf("Please enter the amount to deposit: ");
        flag1=scanf("%d",&amount);
        flag2=scanf("%i", &num_acc);
        if(flag1==0)
        {printf("Failed to read the amount\n");
        break;
        }
        if((flag2||num_acc<=0)==0)
        {printf("Failed to read the account number\n");
        break;
        }
        if(amount<=0){printf("Cannot deposit a negative amount\n");
        break;
        }
        deposit(num_acc,amount);
            break;
        
        
        case 'W':
        printf("Please enter account number: ");
        flag2=scanf("%i", &num_acc);
         printf("Please enter the amount to withdraw: ");
        flag1=scanf("%d",&amount);
        if(flag1==0)
        {printf("Failed to read the amount\n");
        break;
        }
        if((flag2||num_acc<=0)==0)
        {printf("Failed to read the account number\n");
        break;
        }
        if(amount<=0){printf("Cannot withdraw a negative amount\n");
        break;
        }
        withdraw(num_acc,amount);
            break;
       
       
        case 'C':
 		printf("Please enter account number: ");
        flag2=scanf("%i", &num_acc);
        if(flag2==0)
        {printf("Failed to read the amount\n");
        break;
        }
        if(num_acc<=0){printf("Failed to read the account number\n");
        break;
        }
        closeAccount(num_acc);
        break;
       
       
        case 'I':
        printf("Please enter interest rate: ");
        flag2= scanf("%le",&interest);
        if(flag2==0)
        {printf("Failed to read the amount\n");
        break;
        }
        if(num_acc<=0){printf("Invalid interest rate\n");
        break;
        }
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
        printf("Error! Invalid action, Please try again\n");
   		break;
   		 }	
   }  while (num==0);
    
return 0;
}
