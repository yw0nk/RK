#include<iostream>
using namespace std;
class Singleton{
public:
	static Singleton* getInstance(){
		if(_instance == 0){
			_instance = new Singleton();
		}
		return _instance;
	}
private:
	static Singleton* _instance;
	Singleton(){
		cout<<"singleton..."<<endl;
	}
};
Singleton *Singleton::_instance = 0;//The C++ standard allows only static constant integral or enumeration types to be initialized inside the class
