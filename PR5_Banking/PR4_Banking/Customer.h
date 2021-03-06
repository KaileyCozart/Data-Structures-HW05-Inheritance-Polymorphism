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
class Customer
{
private:
	std::string name;
	std::string address;
	int age;
	std::string telephone_number;
	int customer_number;
public:
	Customer(std::string name, std::string address, int age, std::string telephone_number, int customer_number);
	virtual std::string get_name();
	virtual void set_name(std::string name);
	virtual std::string get_address();
	virtual void set_address(std::string address);
	virtual int get_age();
	virtual void set_age(int ageInput);
	virtual std::string get_telephone_num();
	virtual void set_telephone_num(std::string telephone_number);
	virtual int get_customer_num();
	virtual void set_customer_num(int customer_number);
	virtual double get_check_charge();
	virtual double get_overdraft_penalty();
};

Customer::Customer(std::string name, std::string address, int age, std::string telephone_number, int customer_number) {
	this->name = name;
	this->address = address;
	this->age = age;
	this->telephone_number = telephone_number;
	this->customer_number = customer_number;
}

std::string Customer::get_name() {
	return name;
}

void Customer::set_name(std::string name) {
	this->name = name;
}

std::string Customer::get_address() {
	return address;
}

void Customer::set_address(std::string address) {
	this->address = address;
}

int Customer::get_age() {
	return age;
}

void Customer::set_age(int age) {
	this->age = age;
}

std::string Customer::get_telephone_num() {
	return telephone_number;
}

void Customer::set_telephone_num(std::string telephone_number) {
	this->telephone_number = telephone_number;
}

int Customer::get_customer_num() {
	return customer_number;
}

void Customer::set_customer_num(int customer_number) {
	this->customer_number = customer_number;
}

double Customer::get_check_charge() {
	double checkCharge = this->get_check_charge();
	return checkCharge;
}

double Customer::get_overdraft_penalty() {
	double overdraftPenalty = this->get_overdraft_penalty();
	return overdraftPenalty;
}

#endif