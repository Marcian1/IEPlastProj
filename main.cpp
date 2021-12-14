
#include "./Lock.cpp"
#include "./Investment.cpp"
#include <iostream>

#include<memory>
using namespace std;
void doSomething(){
	mutex m;
	Lock lock(&m);


	Lock lock1(lock);
}

void f(){

	std::unique_ptr<Investment> pInv(new Investment);

	//std::unique_ptr<Investment> pInv1(pInv);
	//unique_ptr<Investment> pInv2(NULL);
	//pInv2 = pInv1;


	shared_ptr<Investment> sInv(new Investment);
	shared_ptr<Investment> sInv1 = sInv;
	shared_ptr<Investment> sInv2(NULL);
	sInv2 = sInv1;


}
int main(int argc, char *argv[])
{


	doSomething();



    f();

	return 0;

    
}