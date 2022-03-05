#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Car
{

private:
	int gasolineGauge;

public:
	Car() : gasolineGauge(100){
		cout<<"car()"<<endl;
	}

	Car(int n) : gasolineGauge(n){
		cout<<"car(int n)"<<endl;
	}

	int GetGasGauge(){
		return gasolineGauge;
	}

};

class HybridCar : public Car
{

private:
	int electricGauge;

public:
	HybridCar() : electricGauge(100){
		cout<<"HybridCar()"<<endl;
	}

	HybridCar(int n) : electricGauge(n){
		cout<<"HybridCar(int n)"<<endl;
	}

	HybridCar(int n1, int n2) : electricGauge(n1), Car(n2){
		cout<<"HybridCar(int n1, int n2)"<<endl;
	}

	int GetElecGauge(){
		return electricGauge;
	}

};

class HybridWaterCar : public HybridCar
{

private:
	int waterGauge;

public:

	HybridWaterCar() : waterGauge(100){
		cout<<"HybridWaterCar()"<<endl;
	}

	HybridWaterCar(int n) : waterGauge(n){
		cout<<"HybridWaterCar(int n)"<<endl;
	}

	HybridWaterCar(int n1, int n2) : waterGauge(n1), HybridCar(n2){
		cout<<"HybridWaterCar(int n1, int n2)"<<endl;
	}

	HybridWaterCar(int n1, int n2, int n3) : waterGauge(n1), HybridCar(n2, n3){
		cout<<"HybridWaterCar(int n1, int n2, int n3)"<<endl;
	}

	void ShowCurrentGauge(){
		cout<<"잔여 가솔린: "<<GetGasGauge()<<endl;
		cout<<"잔여 전기량: "<<GetElecGauge()<<endl;
		cout<<"잔여 워터량: "<<waterGauge<<endl;
	}

};

int main(void){

	HybridWaterCar car1;
	car1.ShowCurrentGauge();

	HybridWaterCar car2(10, 30);
	car2.ShowCurrentGauge();

	HybridWaterCar car3(10, 20 ,30);
	car3.ShowCurrentGauge();

	return 0;
}
