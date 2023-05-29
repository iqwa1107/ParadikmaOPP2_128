#include <iostream>
using namespace std;

class basisClass final {
	virtual void perkenalan() {
		cout << "Hallo saya Function dari base class ";
	}
};
class derivedClass :public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya Function daru derived Class ";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}