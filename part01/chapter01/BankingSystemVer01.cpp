#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

namespace suwonbank
{

	void ShowMenu(void);
	void MakeAccount(void);
	void Deposit(void);
	void Withdraw(void);
	void ShowAllAccount(void);

	typedef struct{

		int ID;
		int balance;
		char clientName[100];

	}Account;

	int accNum = 0;

}

suwonbank::Account accArr[100];

int main(void){

	using suwonbank::ShowMenu;
	using suwonbank::MakeAccount;
	using suwonbank::Deposit;
	using suwonbank::Withdraw;
	using suwonbank::ShowAllAccount;

	int num;

	while(1){

		ShowMenu();
		cin>>num;
		switch(num){
			
			case 1:
				MakeAccount();		
				break;
			case 2:
				Deposit();
				break;
			case 3:
				Withdraw();
				break;
			case 4:
				ShowAllAccount();
				break;
			case 5:
				return 0;
			default:
				cout<<"잘못된 입력입니다. 범위1~5"<<endl;
				
			
		}
		

	}


	return 0;
}

void suwonbank::ShowMenu(){

	cout<<"-----Menu-----"<<endl;
	cout<<"1. 계좌개설"<<endl;
	cout<<"2. 입금"<<endl;
	cout<<"3. 출금"<<endl;
	cout<<"4. 계좌정보 전체 출력"<<endl;
	cout<<"5. 프로그램 종료"<<endl;

}

void suwonbank::MakeAccount(){

	int tempID;
	char tempName[100];
	int tempBalance;

	cout<<"[계좌개설]"<<endl;
	cout<<"계좌ID: ";
	cin>>tempID;
	cout<<"이 름: ";
	cin>>tempName;
	cout<<"입금액: ";
	cin>>tempBalance;

	accArr[suwonbank::accNum].ID = tempID;
	accArr[suwonbank::accNum].balance = tempBalance;
	strcpy(accArr[suwonbank::accNum].clientName, tempName);

	suwonbank::accNum++;

}

void suwonbank::Deposit(){

	int tempID;
	int tempBalance;
	int num = 0;

	cout<<"[입    금]";
	cout<<"계좌ID: ";
	cin>>tempID;
	cout<<"입금액: ";
	cin>>tempBalance;

	while(accArr[num].ID != tempID){
		num++;
	}

	accArr[num].balance += tempBalance;

}

void suwonbank::Withdraw(){

	int tempID;
	int tempBalance;
	int num = 0;

	cout<<"[출    금]";
	cout<<"계좌ID: ";
	cin>>tempID;
	cout<<"출금액: ";
	cin>>tempBalance;
	
	while(accArr[num].ID != tempID){
		num++;
	}

	accArr[num].balance -= tempBalance;

}

void suwonbank::ShowAllAccount(){

	for(int i = 0; i < suwonbank::accNum; i++){

		cout<<"계좌ID: "<<accArr[i].ID<<endl;
		cout<<"이 름: "<<accArr[i].clientName<<endl;
		cout<<"잔 액: "<<accArr[i].balance<<endl;
		cout<<endl;
	}

}
