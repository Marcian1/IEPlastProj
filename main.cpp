
#include "./Lock.cpp"
#include "./Investment.cpp"
#include <iostream>

#include<memory>
using namespace std;
void doSomething(){
	mutex m;
	Lock lock(&m);


	//Lock lock1(lock); compile error
}

void f(){

	//std::unique_ptr<Investment> pInv1(new Investment);
	//std::unique_ptr<Investment> pInv2 = pInv1 //compile error
	

	std::shared_ptr<double> p5(new double(5));  //aloca 1 double si o initializeaza cu valoarea 5
	std::shared_ptr<double[]> p6(new double[5]);  // aloca 5 double-uri 
	std::shared_ptr<double[]> p7 = p6;  // ambii pointer detin zona de memorie acum

	p6.reset();  // zona de memorie inca exista datorita lui p7.
	p7.reset();  // se elibereaza memoria deoarece nu mai exista pointer care sa indice spre ea


	cout << "#####Unique#####" << endl;
	unique_ptr<Investment> a(new Investment());

	unique_ptr<Investment> b = std::move(a);



	cout << "#####Shared#####" << endl;
	shared_ptr<Investment> sInv(new Investment);
	shared_ptr<Investment> sInv1 = sInv;
	shared_ptr<Investment> sInv2(NULL);
	sInv2 = sInv1;

	/*
Use unique_ptr when you want a single pointer to an object that will be reclaimed when that single pointer is destroyed.
Use shared_ptr when you want multiple pointers to the same resource.
	*/


}
int main(int argc, char *argv[])
{


	doSomething();



    f();

	return 0;

    
}