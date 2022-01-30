#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{

private:
	int num1;
	mutable int num2;

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2){
		
	}

	void ShowSimpleData(){
		cout<<num1<<", "<<num2<<endl;
	}

	void CopyToNum2() const{
		num2 = num1;
	}

};

int main(void){

	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;

}
