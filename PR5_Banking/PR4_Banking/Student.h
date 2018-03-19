#ifndef STUDENT_H_
#define STUDENT_H_
#include <vector>
#include <stdexcept>

class Student : public Customer {
public:
	const double savings_interest = .02;
	double check_interest = .01;
	double check_charge = 5;
	const double overdraft_penalty = 20;
};

#endif