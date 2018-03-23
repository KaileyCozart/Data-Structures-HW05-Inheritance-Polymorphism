#ifndef ADULT_H_
#define ADULT_H_
#include <vector>
#include <stdexcept>

class Adult : public Customer {
private:
	double check_charge = 15;
	const double overdraft_penalty = 30;
public:
	Adult::Adult(std::string name, std::string address, int age, std::string telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .01;
	double check_interest = .005;
	double get_check_charge();
	double get_overdraft_penalty();
};

double Adult::get_check_charge() {
	return check_charge;
}

double Adult::get_overdraft_penalty() {
	return overdraft_penalty;
}

#endif