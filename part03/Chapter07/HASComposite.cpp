#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

class Gun
{

private:
	int bullet;

public:
	Gun(int bnum) : bullet(bnum){
	}

	void Shot(){
		cout<<"Bang!"<<endl;
		bullet--;
	}
};

class Police
{

private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff){
		
		if(bnum > 0){
			pistol = new Gun(bnum);
		}else{
			pistol = NULL;
		}

		void Shot(){
			if(pistol==NULL){
				cout<<"Hut Bang!"<<endl;
			}else{
				pistol->Shot();
			}
		}
	}

	~Police(){
		if(pistol!=NULL){
			delete pistol;
		}
	}
};

int main(void){
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}
