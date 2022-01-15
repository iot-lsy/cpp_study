#include <iostream>

int main(void){

	char name[100];
	char num[100];
	
	std::cout<<"이름:";
	std::cin>>name;

	std::cout<<"전화번호:";
	std::cin>>num;
	
	std::cout<<"이름: "<<name<<std::endl;
	std::cout<<"전화번호: "<<num<<std::endl;


	return 0;
}
