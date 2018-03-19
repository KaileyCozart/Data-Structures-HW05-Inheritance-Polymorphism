#ifndef ADULT_H_
#define ADULT_H_
#include <vector>
#include <stdexcept>

class Adult : public Customer {
public:
	const double savings_interest = .01;
	double check_interest = .005;
	double check_charge = 15;
	const double overdraft_penalty = 30;
};

#endif