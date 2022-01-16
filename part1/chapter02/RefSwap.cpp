#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void SwapByRef2(int &num1, int &num2){

	int temp = num1;
	num1 = num2;
	num2 = temp;

}

int main(void){

	int val1 = 20;
	int val2 = 30;

	SwapByRef2(val1, val2);
	cout<<"val1: "<<val1<<endl;
	cout<<"val2: "<<val2<<endl;

	return 0;
}
