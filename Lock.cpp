//Copy Behaviour Resource Management Classes

#include<iostream>
#include<mutex>
#include "./Uncopyable.cpp"
using namespace std;


class Lock: private Uncopyable{
public:
	explicit Lock(mutex* pm) : mutexPtr_(pm){
		if(mutexPtr_->try_lock()){
			cout << "Locked" << endl;
		}else{
			cout << "Locking Failed" << endl;
		}
	}
	~Lock(){
		mutexPtr_->unlock();
		cout << "Unlocked" << endl;
	}
private:
	mutex * mutexPtr_;
};


