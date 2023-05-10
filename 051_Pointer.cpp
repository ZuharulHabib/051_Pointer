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

int main()
{
	mahasiswa mhs{ 1 };   //object mhs
	mhs.showNim();       //Member Acces Operator

	mahasiswa& ref = mhs;    //pointer Refrence refMhs
	ref.nim = 2;             //Member Acces Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;  //Pointer Dereference pMhs
	pMhs->nim = 3;           //Arrow Operator
	mhs.showNim();
	system("Pause");
	return 0;
}