#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	// virtual void pesan(){
	//cout<<"pesa dari seseorang"<< endl;
	//}
};

class joko : public seseorang {
public:
	void pesan()
	{
		cout << "pesan dari joko" << endl;
	}
};
