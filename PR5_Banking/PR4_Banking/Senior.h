#ifndef SENIOR_H_
#define SENIOR_H_
#include <vector>
#include <stdexcept>
#include "Customer.h"

class Senior : public Customer {
private:
	double check_charge = 10;
	const double overdraft_penalty = 25;
public:
	Senior::Senior(std::string name, std::string address, int age, std::string telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .02;
	double check_interest = .01;
	double get_check_charge();
	double get_overdraft_penalty();
};

double Senior::get_check_charge() {
	return check_charge;
}

double Senior::get_overdraft_penalty() {
	return overdraft_penalty;
}

#endif