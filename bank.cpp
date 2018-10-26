#include <iostream>

using namespace std;

class BankAcct{
	
	private:
		int _acctNum;
		double _balance;
	public:
		
		BankAcct (int aNum)        //mathod 1 default constuctor;
		{
			_acctNum = aNum;
			_balance = 0;
		}
		
		BankAcct (int aNum, double amt)      // method 2 non-default method.
		//:	_acctNum(aNum), _balance(amt)
		{  _acctNum=aNum;
           _balance = amt;
		}
		
		~BankAcct ()
		{
			
		}  
		
		int withdraw(double amount)
		{
			if(_balance < amount )
			{
			cout<<endl<<"Fault exceed your balance"<<endl;
			return 0;
			}
			else
			{
			_balance -= amount;
			cout<<endl<<"Successful"<<endl;
			return 1;
			}
		}
		
		void deposit(double amount)
		{
			_balance += amount;
		}
		
		void show_balance()
		{
		cout<< "the balance money is "<< _balance << endl;	
		} 
		
};

	void transfer(BankAcct& fromAcct, BankAcct& toAcct, double amt)
	{
		fromAcct.withdraw(amt);
		toAcct.deposit(amt);
	}

int main()
{
	/*
	cout<<"Enter your account number: ";
	int account_number;
	cin>> account_number;
	cout<<endl<<"Enter the money deposit: ";
	double money;
	cin>> money;
//	BankAcct ba2(1234);   // using method 1 to declare and initialize an object;
	BankAcct ba1(account_number, money); // using method 2 to declare and initialize an object;
*/
    BankAcct ba1(1991,1000.0);
	BankAcct ba2(1992,3000.0);	
//	ba1.withdraw(500.00);
//	ba1.deposit(1000);
    transfer(ba1,ba2,500);
    ba2.show_balance();
    
    
    
//	ba2.deposit(3000.00);
	return 0;
}