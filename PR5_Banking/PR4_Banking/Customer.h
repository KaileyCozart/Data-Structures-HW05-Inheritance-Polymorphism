#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	std::string name;
	std::string address;
	unsigned int age;
	unsigned int telephone_number;
	unsigned int customer_number;
public:
	std::string get_name();
	void set_name(std::string nameInput);
	std::string get_address();
	void set_address(std::string addressInput);
	int get_age();
	void set_age(int ageInput);
	int get_telephone_num();
	void set_telephone_num(int telephoneNumInput);
	int get_customer_num();
	void set_customer_num(int customerNumInput);
};

std::string Customer::get_name() {
	return name;
}

void Customer::set_name(std::string nameInput) {
	name = nameInput;
}

std::string Customer::get_address() {
	return address;
}

void Customer::set_address(std::string addressInput) {
	address = addressInput;
}

int Customer::get_age() {
	return age;
}

void Customer::set_age(int ageInput) {
	age = ageInput;
}

int Customer::get_telephone_num() {
	return telephone_number;
}

void Customer::set_telephone_num(int telephoneNumInput) {
	telephone_number = telephoneNumInput;
}

int Customer::get_customer_num() {
	return customer_number;
}

void Customer::set_customer_num(int customerNumInput) {
	customer_number = customerNumInput;
}

#endif