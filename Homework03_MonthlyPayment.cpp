// Raymond Bryant, Jr.
// CIS 2541 Homework 03 Montly Payment
// 09/12/21

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

// This monthly payment calculates the monthly payment along with the interest on a loan

int main()
{
	// Variables
	int n; // Number of monthly payments
	int loan; // Starting loan amount

	// Prep user to enter loan amount and monthly payments
	cout << " Enter the loan amount: " << endl;
	cin >> loan;
	cout << " Enter the number of monthly payments: " << endl;
	cin >> n;

	// Monthly interest rate
	const double rate = (0.04 / n);

	// Calculate monthly payments plus interest
	int payment = rate * (1 + rate) * loan;

	// Display monthly payments
	cout << loan << " loan at " << rate << " percent over " << n << " payments is " << payment << " per month " << endl;

	system("PAUSE");
	return 0;
}