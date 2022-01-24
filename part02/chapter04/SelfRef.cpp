#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SelfRef
{

private:
	int num;
	
public:
	SelfRef(int n) : num(n){
		cout<<"객체생성"<<endl;
	}

	SelfRef& Adder(int n){
		num += n;
		return *this;
	}

	SelfRef& ShowTwoNumber(){
		cout<<num<<endl;
		return *this;
	}

};

int main(void){

	SelfRef obj(3);
	SelfRef &ref = obj.Adder(3);
	
	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	
	return 0;

}
