#include<iostream>
using namespace std;
class BankAccount {
private:
	char* title;
	double accountno;
	double balance;
	double am;
	double gi;
public:
	//BankAccount() {
		//title =nullptr;
		//accountno = 0;
		//balance = 0;
		//am = 0;
	//}

	void settitle(char* t) {
		int length = 0;
		for (int i = 0; t[i] != '\0'; i++)
		{
			length++;
		}
		title = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			title[i] = t[i];
		}
		title[length] = '\0';
	}
	char* gettitle() {
		return title;
	}
	void setbalance(double b) {
		balance = b;
	}
	double getbalance() {
		return balance;
	}
	void setaccountno(double an) {
		accountno = an;
	}
	double getaccountno() {
		return accountno;
	}
	void deposit() {
		cout << "Enter amount you want to deposit:" << endl;
		cin >> am;
		cout << "Your amount has been deposited:" << endl;
		cout << "Your total amount is:" << endl;
		cout << balance + am;
	}
	void withdraw() {
		cout << "Enter amount you want to withdraw:" << endl;
		cin >> gi;
		cout << "You have succefully withdraw your amount:" << endl;
		cout << "Your total amount is:" << endl;
		balance = balance - gi;
	}
};
class InterestRate : public BankAccount {
private:
	double nt;
	double inr;
public:
	void setinterestrate(double i) {
		inr = i;
	}
	double getinterestrate() {
		return inr;
	}
	void Calculateinr() {
		nt = (inr / 100) * getbalance();
		cout << "Your Total interest is:" << endl;
		cout << nt;
		

	}
};
class CheckingAccount : public BankAccount {
private:
	double tr;
public:
	void settransaction(double trr) {
		tr = trr;
	}
	double gettransaction() {
		return tr;
	}
      
};
int main() {
	int choice;
	char* ti;
	ti = new char[20];
	double acn;
	double bl;
	double rt;
	float tt;
	BankAccount b1;
	cout << "Enter Bank Title:" << endl;
	cin >> ti;
	b1.settitle(ti);
	b1.gettitle();
	cout << "Enter Account no:" << endl;
	cin >> acn;
	b1.setaccountno(acn);
	b1.getaccountno();
	cout << "Enter Current Balance:" << endl;
	cin >> bl;
	b1.setbalance(bl);
	b1.getbalance();
	InterestRate r1;
	cout << "Enter Interest rate:" << endl;
	cin >> rt;
	r1.setinterestrate(rt);
	r1.getinterestrate();
	double rate;
	
	CheckingAccount a1;
	cout << "Enter Per Transaction rate:" << endl;
	cin >> tt;
	a1.settransaction(tt);
	a1.gettransaction();
	cout << "Do you want to Deposit or Withdraw?" << endl;
	cout << "Enter 1 for Deposit and 2 for Withdraw:" << endl;
	cin >> choice;
	if (choice == 1) {
		b1.deposit();
	}
	if (choice == 2) {
		b1.withdraw();
	}
	cout << endl;
	
	r1.Calculateinr();
	cout << endl;
	
	cout << endl;
	return 0;
}