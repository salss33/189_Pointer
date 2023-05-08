#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
Public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setID(int pId);
	void displayAll(orang& a);
};
