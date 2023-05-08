#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
Public:
	void setNama(string pNama);
	friend class siswa;