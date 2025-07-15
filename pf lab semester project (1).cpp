#include <iostream>
using namespace std;

struct Bankaccount{
	string holdername;
	double balance;
	int accountnumber;
	double deposit;
	 double currenttbalance;
};

void createaccount(Bankaccount &account){
	
	cout<<"Enter Holdername"<<endl;
	cin.ignore();
	getline(cin,account.holdername);
	
	cout<<"Enter account number"<<endl;
	cin>>account.accountnumber;
	
	
	cout<<"Enter Your Initial Deposit"<<endl;
	cin>>account.balance;
	
	cout<<"Account created successfully!";
}

void withdrawamount(Bankaccount &account){
double amount;
		cout<<"Withdraw your amount"<<endl<<endl;
	cin>>amount;
	if(amount>0 && amount<account.balance){
		account.balance-=amount;
		cout<<"amount  withdrawn successfully"<<endl;
	 
		cout<<"Current balance is :"<< account.balance;
	}
	else{
		cout<<"Invalid Amount For withdraw!";
	}
}

void depositamount(Bankaccount &account){
	
	double amount;
	cout<<"Deposit Your Cash :"<<endl;
	cin>>amount;
	if(amount>0){
	
	account.balance+=amount;
	cout<<"Amount Have been deposited Successfully !"<<endl;
}
}
void displaydetails(Bankaccount &account){
	
	cout<<"Holdername :"<<account.holdername;
	
	cout<<endl<<"Accountnumber :"<<account.accountnumber;
	
	cout<<endl<<"Account Balance :"<<account.balance;
	
	cout<<endl;
}



int main(){

int choice;
Bankaccount account;
	
	do{

cout<<endl<<"  Bank Management System! "<<endl;	
cout<<"1. Create Account"<<endl;
cout<<"2. Deposit Cash"<<endl;
cout<<"3. Withdraw Cash"<<endl;
cout<<"4. Account Details"<<endl;
cout<<"5. Exit"<<endl<<endl;
cout<<" Enter Your Choice"<<endl;
cin>>choice;

switch(choice){
	
case 1: 

createaccount( account);
	break;
	
case 2:
depositamount(account);

break;

case 3:
withdrawamount(account);

break;

case 4:	

displaydetails(account);


break;



case 5:
		cout<<"Thank You!"<<endl;

break;



default: cout<<"Invalid choice!"<<endl;;
cout<<endl;
break;
}


} while( choice!= 5);

}
