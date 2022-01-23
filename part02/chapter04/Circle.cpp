#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Circle
{

private:
	int xpos;
	int ypos;
	int radius;

public:
	void InitMembers(int x, int y, int r){
		xpos = x;
		ypos = y;
		radius = r;
	}

	void ShowCircleInfo() const{
		cout<<"radius: "<<radius<<endl;
		cout<<"["<<xpos<<","<<ypos<<"]"<<endl<<endl;
	}

};

class Ring
{

private:
	Circle c1;
	Circle c2;

public:
	void Init(int x1, int y1, int r1, int x2, int y2, int r2){
		c1.InitMembers(x1, y1, r1);
		c2.InitMembers(x2, y2, r2);
	}

	void ShowRingInfo() const{
		cout<<"Inner Circle Info..."<<endl;
		c1.ShowCircleInfo();
		cout<<"Outter Circle Info..."<<endl;
		c2.ShowCircleInfo();
	}

};

int main(void){

	Ring ring;
	ring.Init(1, 1, 4, 1, 1, 5);
	ring.ShowRingInfo();

	return 0;
}
