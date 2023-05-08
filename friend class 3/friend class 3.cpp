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