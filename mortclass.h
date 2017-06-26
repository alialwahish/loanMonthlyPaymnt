// Name: Ali Bayati
// Mortgage payment

#pragma once
#include<iostream>

using namespace std;

class mortclass
{
public:
	// constructor
	mortclass()
	{
		rate = 0, years = 0, loan = 0;
	}
	
	~mortclass();
	// sets and gets functions 
	float validate(float);
	void setloan(float);
	void setrate(float);
	void setyears(int);
	float monthlypymt();
	float totalloan();

private:
	float payment;
	float loan;
	float rate;
	float totloan;
	int years;
};


mortclass::~mortclass()
{
	// free up any memory this object used
}


void mortclass::setloan(float a)
{
	loan = a;
}
void mortclass::setrate(float b)
{
	rate = b;
}

void mortclass::setyears(int c)
{
	years = c;
}
float mortclass::monthlypymt()
{
	float term;
	term = pow(1 + rate / 12, 12 * years);
	payment= (loan*(rate / 12) * term) / (term - 1);
	return payment;
}
float mortclass::validate(float v)
{
	while (v<0)
	{
	cout << "Invalid entry try again :";
	cin >> v;
	}
	return v;	
}
float mortclass::totalloan()
{
	totloan= payment*years * 12;
	return totloan;
}