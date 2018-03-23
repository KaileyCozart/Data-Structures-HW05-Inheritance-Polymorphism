#ifndef STUDENT_H_
#define STUDENT_H_
#include <vector>
#include <stdexcept>

class Student : public Customer {
public:
	Student::Student(std::string name, std::string address, int age, int telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .02;
	double check_interest = .01;
	double check_charge = 5;
	const double overdraft_penalty = 20;
};

#endif