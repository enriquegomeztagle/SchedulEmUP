#include "patient.h"

#include <iostream>
using namespace std;

patient::patient() = default;

patient::patient(string name, const int age, const int doctor_2_visit, string cause, const int urgency)
{
	this->name = move(name);
	this->age = age;
	this->doctor_2_visit = doctor_2_visit;
	this->cause = move(cause);
	this->urgency = urgency;
}
