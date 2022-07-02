#include <iostream>
#include <string>
using namespace std;
class customer {
private:
	int custId;
	string name;
	string city;
public:
	static int counter;

	customer() {
		cout << "Please enter your name: ";
		getline(cin, name);
		counter++;
		
	}
	customer(int custId, string name, string city) {
		this->custId = custId;
		this->name = name;
		this->city = city;
		
		counter++;
	};

	int getCustId()const {
		return this->custId;
	}

	string getName() const {
		return this->name;
	}

	string getCity() const {
		return this->city;
	}

	void setCustId(int custId) {

		this->custId = custId;
	}

	void setName(string name) {
		this->name = name;
	}

	void setCity(string city) {
		this->city = city;
	}

	void printInfo() {
		cout << "\nThe ID: " << this->custId<<endl;
		cout << "\nName: " << this->name << endl;
	}

	static int getTotalOfCustNo() {
		return counter;
	}

};

int customer::counter = 0;

