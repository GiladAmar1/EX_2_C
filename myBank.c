#include "myBank.h"
#include <stdio.h>
double accounts[50][2] ;

void openAccount(double amount){//opening new account
	for (int i=0; (i<50); i++){
	if( accounts[i][0]==0){
	accounts[i][0]=1;
	accounts[i][1]=amount;
	printf("New account number is: %i\n",i+901);			  
	break;
		}		
	}
	if(accounts[49][0]==1){
	printf("The bank account database is full\n");
	}				  	
}

void balance(int acc_num){ //return the balance
	if((acc_num<901)||(acc_num>950)){
	printf("There is no such account in the database\n");
	 return;
}
	if(accounts[acc_num-901][0]==1){     
	printf("The balance of account number %d is: %0.2lf\n",acc_num,accounts[acc_num-901][1]); 
	}
	else{
	printf("This account is closed\n");
	}		
}

void deposit(int acc_num ,double amount){ //return the new balance
	if(((acc_num<901)||(acc_num>950))||(amount<= 0)){
	printf("There is no such account in the database\n /cant be enterd negtive amount\n");
	return;
}	
	if(accounts[acc_num-901][0]==1){	    
	 printf("TThe new balance is: %0.2lf\n", (accounts[acc_num-901][1]+amount)); 
	 accounts[acc_num-901][1]=accounts[acc_num-901][1]+amount ;
	}
	else{
	 printf("This account is closed\n");
	}
}

void withdraw(int acc_num ,double amount){//return the new balance
	if(((acc_num<901)||(acc_num>950))||(amount<=0)){
printf("There is no such account in the database\n can't be enterd negtive amount\n");
	return;
}
if((accounts[acc_num-901][0]==1)&&((accounts[acc_num-901][1]-amount)>= 0)){	    
printf("The new balance is: %0.2lf\n",(accounts[acc_num-901][1] - amount)); 
	 accounts[acc_num-901][1] = accounts[acc_num-901][1]-amount;
	}
	else{
	 printf("This account is closed \n there is no money to withdraw\n");
	}
}

void closeAccount(int acc_num){// close an open account	
	if(((acc_num<901)&&(acc_num>950))){
	printf("There is no such account in the database\n");
		 	return;
	}
	if (accounts[acc_num-901][0]==1){
	accounts[acc_num-901][0]=0;
	accounts[acc_num-901][1]=0;
	printf("Closed account number %d\n",acc_num); 
}
	else{
	printf("This account is alreay closed.\n");
	}
}

void addDependInterest(double interest){ //add Interest on the money 
	if(interest<0){
	printf("Cant enterd negtive interest\n");
}
	for (int i=0;i<50;i++){
	if (accounts[i][0]==1)
{
	accounts[i][1]=(accounts[i][1])+((interest/100)*(accounts[i][1]));
	}
		}
}

void printall(){// print all open accounts
	for (int i=0;i<50;i++){	
	if (accounts[i][0]==1)
	{
	printf("%i) num account: %i,The Deposit is:%0.2lf\n" ,i+1,901+i ,accounts[i][1]);
		}
	}
}

void closeAllAccounts(){// close an open account
for (int i=0;i<50; i++){	
	if (accounts[i][0]==1)
	{
	accounts[i][0]=0;
	accounts[i][1]=0;
	}
}
	printf("All acounts been closed\n");
}

