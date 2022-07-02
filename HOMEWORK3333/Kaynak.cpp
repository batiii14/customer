#include "customer.h"
using namespace std;

void main() {
	customer c1;
	customer c2(10, "FAZULLAH", "KARABUK");

	c1.printInfo();
	c2.printInfo();

	customer custArr[5];

	for (int i = 0; i < 5; i++) {
		custArr[i].printInfo();
	}


	custArr[2].setName("BATUN");
	custArr[4].setName("AKIN");
	cout << "\nAfter changing the values" << endl;
	


	custArr[2].printInfo();
	custArr[4].printInfo();


	cout << "Total number of customers are: " << customer::getTotalOfCustNo()<<endl;


	system("pause");
}