/*
* File Name: data_input.cpp
 * Date: 06/5/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */


#include "data_input.h"
#include <iostream>

using std::cin;
using namespace std;


DataInput::DataInput() { //Initilizes our object

};

void::DataInput::PromptUserForData() {  //Prompts user for data and captures it in the member variables of the class

	cout << endl;

	cout << "\033[32m**********************************\033[0m" << endl;
	cout << "\033[32m******** Airgead Banking *********\033[0m" << endl;
	cout << "\033[32m**********************************\033[0m" << endl;
	cout << "\033[32m********** Data Input ************\033[0m" << endl;
	
	cout << endl;

	cout << "\033[32mInitial Investment Amount: $\033[0m";


	cout << "\033[32m  ";
	cin >> initialInvestment;
	cout << "\033[0m" << endl;




	while (cin.fail() || initialInvestment < 0.0 || cin.peek() != '\n') { // Input validation for initial investment, ensuring it's a non-negative number
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input

		cout << "\033[31mInvalid input. Please enter a non-negative number for the initial investment: \033[0m" << endl;

		cout << endl;

		cout << "\033[32mInitial Investment Amount: $\033[0m";

		cout << "\033[32m  ";
		cin >> initialInvestment;
		cout << "\033[0m" << endl;
	}


	cout << "\033[32mMonthly Deposit: $\033[0m";


	cout << "\033[32m  ";
	cin >> monthlyDeposit;
	cout << "\033[0m" << endl;             //The numbers by the cout statements are for the color formatting of the text in the terminal, 
	                   


	while (cin.fail() || monthlyDeposit < 0.0 || cin.peek() != '\n') { // Input validation for initial investment, ensuring it's a non-negative number
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input

		cout << "\033[31mInvalid input. Please enter a non-negative number for the initial investment: \033[0m" << endl;

		cout << endl;

		cout << "\033[32mMonthly Deposit: $\033[0m";

		cout << "\033[32m  ";
		cin  >> monthlyDeposit;
		cout << "\033[0m" << endl;
	}


	cout << "\033[32mAnnual Interest Rate: \033[0m";


	cout << "\033[32m  ";
	cin >> annualInterestRate;
	cout << "\033[0m" << endl;



	while (cin.fail() || annualInterestRate < 0 || annualInterestRate > 100 || cin.peek() != '\n') { // Input validation for initial investment, ensuring it's a non-negative number
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input

		cout << "\033[31mInvalid input. Please enter a non-negative number for the initial investment: \033[0m" << endl;

		cout << endl;

		cout << "\033[32mmAnnual Interest Rate: \033[0m%";

		cout << "\033[32m  ";
		cin >> annualInterestRate;
		cout << "\033[0m" << endl;
	}







	cout << "\033[32mNumber of years: \033[0m";

	cout << "\033[32m  ";
	cin >> years;
	cout << "\033[0m" << endl;


	while (cin.fail() || years < 0  || cin.peek() != '\n') { // Input validation for initial investment, ensuring it's a non-negative number
		cin.clear(); // Clear the error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input

		cout << "\033[31mInvalid input. Please enter a non-negative number for the initial investment: \033[0m" << endl;

		cout << endl;

		cout << "\033[32mmNumber of years: \033[0m";

		cout << "\033[32m  ";
		cin >> years;
		cout << "\033[0m" << endl;
	}




	cout << "\033[32mPress any key to continue...\033[0m" << endl;


	cin.ignore(); // Clear the input buffer
	cin.get();    // Wait for the user to press a key
}

//getter functions for member variables
double DataInput :: getInitialInvestment() const {



	return initialInvestment;
}

double DataInput::getMonthlyDeposit() const {

	return monthlyDeposit;
}

double DataInput::  GetAnnualInterestRate() const {

	return annualInterestRate;

}

int DataInput:: GetYears() const {


	return years;
}

