#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};
void mahasiswa::showNim() { //implementasi method di luar class
	cout << "No Induk = " << nim << endl;
}



