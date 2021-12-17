
#include<iostream>
#include "./Motor.cpp"
#include "./GasStation.cpp"
#include <memory>
using namespace std;

class Masina{
public:
    string nume ;
    unique_ptr<Motor> motor ;
    shared_ptr<GasStation> gasStation;
	Masina(string nume, Motor *motor, GasStation *gasStation) : nume(nume), motor(motor), gasStation(gasStation){
       
    }

    void printMasina() {
        std::cout << this->nume << "  " << this->motor->nume  + " " << this->gasStation->nume<< std::endl;
    }
};





