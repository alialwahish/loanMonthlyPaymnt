// Name: Ali Bayati
// Mortgage payment


#include<iostream>
#include<iomanip>
#include"mortclass.h"

using namespace std;

int main()
{
	float r, l;
	int y;
	mortclass gage;
	cout << "Enter the total loan amount :";
	cin >> l;
	l=gage.validate(l);
	gage.setloan(l);
	cout << "Enter the annual interest rate % :";
	cin >> r;
	r = gage.validate(r);
	gage.setrate(r / 100);
	cout << "Enter the number of years for the loan :";
	cin >> y;
	y = gage.validate(y);
	gage.setyears(y);
	cout << fixed << setprecision(2);
	cout << "The monthly payment :                          $" <<gage.monthlypymt()<<endl;
	cout << "The total amount of loan at the end of period :$" << gage.totalloan()<<endl;
	
	return 0;
}
/*Output
Enter the total loan amount :125000
Enter the annual interest rate % :4.5
Enter the number of years for the loan :30
The monthly payment :                          $633.36
The total amount of loan at the end of period :$228008.84
Press any key to continue . . .*/

