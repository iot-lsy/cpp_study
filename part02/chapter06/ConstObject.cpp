#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n){
		
	}

	SoSimple& AddNum(int n){
		num += n;
		return *this;
	}

	void ShowData() const{
		cout<<"num: "<<num<<endl;
	}
};

int main(void){
	
	const SoSimple obj(7);
	obj.ShowData();

	return 0;
}
