#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Point
{

public:
	int x;
	int y;

};

class Rectangle
{

public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo(){

		cout<<"좌 상단: "<<'['<<upLeft.x<<","<<upLeft.y<<"]"<<endl;
		cout<<"우 하단: "<<'['<<lowRight.x<<","<<lowRight.y<<"]"<<endl;

	}

};

int main(void){

	Point pos1 = {-2, 4};
	Point pos2 = {5, 9};
	Rectangle rec = {pos1, pos2};
	rec.ShowRecInfo();

	return 0;
}
