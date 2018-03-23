#ifndef SENIOR_H_
#define SENIOR_H_
#include <vector>
#include <stdexcept>
#include "Customer.h"

class Senior : public Customer {
public:
	Senior::Senior(std::string name, std::string address, int age, std::string telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .02;
	double check_interest = .01;
	double check_charge = 10;
	const double overdraft_penalty = 25;
};

#endif