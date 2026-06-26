/*
* File Name: data_input.h
 * Date: 06/5/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */

#ifndef AIRGEAD_BANKING_APP_DATAINPUT_H
#define AIRGEAD_BANKING_APP_DATAINPUT_H


class DataInput {

//member variables 
private: 

 double initialInvestment = 0.0;
 double monthlyDeposit = 0.0;
 double annualInterestRate = 0.0;
 int years = 0;

public:

	DataInput();

	//capture function
	void PromptUserForData();

	//getter functions for member variables

	double getInitialInvestment() const;
	double getMonthlyDeposit() const;
	double GetAnnualInterestRate() const;
	int GetYears() const;

};


#endif
