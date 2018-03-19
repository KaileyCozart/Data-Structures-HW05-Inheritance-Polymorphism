#ifndef SENIOR_H_
#define SENIOR_H_
#include <vector>
#include <stdexcept>
#include "Customer.h"

class Senior : public Customer {
public:
	const double savings_interest = .02;
	double check_interest = .01;
	double check_charge = 10;
	const double overdraft_penalty = 25;
};

#endif