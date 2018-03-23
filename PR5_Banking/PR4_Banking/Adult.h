#ifndef ADULT_H_
#define ADULT_H_
#include <vector>
#include <stdexcept>

class Adult : public Customer {
public:
	Adult::Adult(std::string name, std::string address, int age, int telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .01;
	double check_interest = .005;
	double check_charge = 15;
	const double overdraft_penalty = 30;
};

#endif