#ifndef STUDENT_H_
#define STUDENT_H_
#include <vector>
#include <stdexcept>

class Student : public Customer {
private:
	double check_charge = 5;
	const double overdraft_penalty = 20;
public:
	Student::Student(std::string name, std::string address, int age, std::string telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number) {}
	const double savings_interest = .02;
	double check_interest = .01;
	double get_check_charge();
	double get_overdraft_penalty();
};

double Student::get_check_charge() {
	return check_charge;
}

double Student::get_overdraft_penalty() {
	return overdraft_penalty;
}

#endif