#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void plus(int &num){

	num++;
	
}

void inverse(int &num){

	num = num * -1;

}

int main(void){

	int num;
	cin>>num;
	cout<<"input val: "<<num<<endl;	

	plus(num);
	cout<<"plus 1: "<<num<<endl;
	
	inverse(num);
	cout<<"inverse: "<<num<<endl;	

	return 0;
}
