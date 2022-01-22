#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void SwapPointer(int *(&num1), int *(&num2)){

	int* ptr = num1;
	num1 = num2;
	num2 = ptr;
	
}

int main(void){

	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout<<"*ptr1: "<<*ptr1<<endl;
	cout<<"*ptr2: "<<*ptr2<<endl;
	
	SwapPointer(ptr1, ptr2);

	cout<<"*ptr1: "<<*ptr1<<endl;
	cout<<"*ptr2: "<<*ptr2<<endl;

	return 0;
}
