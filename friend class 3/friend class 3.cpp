#include <iostream>
#include <string>
using namespace std;

class pelajar;
class manusia {
public:
	void showNilaiPelajar(Pelajar&);
};
class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;

	}
	friend void manusia::showNilaiPelajar(pelajar& x) {
		cout << "Nilai Pelajar: " << x.nilai;
	}