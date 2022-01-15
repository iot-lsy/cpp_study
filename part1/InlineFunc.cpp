#include <iostream>

inline int Sqaure(int x){

	return x * x;	

}

int main(void){

	std::cout<<Sqaure(5)<<std::endl;
	std::cout<<Sqaure(12)<<std::endl;

	return 0;
}
