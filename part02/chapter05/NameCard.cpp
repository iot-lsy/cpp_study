#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

class NameCard
{

private:
	char* name;
	char* num;
	int age;

public:

	NameCard(char* myname, char* mynum, int myage){
		name = new char[strlen(myname) + 1];
		num = new char[strlen(mynum) + 1];
		strcpy(name, myname);
		strcpy(num, mynum);
		age = myage;
	}

	explicit NameCard(const NameCard &copy) : age(copy.age){

		name = new char[strlen(copy.name) + 1];
		num = new char[strlen(copy.num) + 1];
		strcpy(name, copy.name);
		strcpy(num, copy.num);

	}

	void ShowNameCardInfo(){
	
		cout<<"이름: "<<name<<endl;
		cout<<"번호: "<<num<<endl;
		cout<<"나이: "<<age<<endl;

	}

	~NameCard(){
		delete []name;
		delete []num;
		cout<<"Called Destructor"<<endl;
	}

};


int main(void){

	NameCard man1("Lee Dong Woo", "010-1111-2222", 29);
	NameCard man2(man1);

	man1.ShowNameCardInfo();
	man2.ShowNameCardInfo();

	return 0;
}
