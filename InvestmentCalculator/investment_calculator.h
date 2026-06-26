
/*
* File Name: investment_calculator.h
 * Date: 06/1/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */


#ifndef AIRGEAD_BANKING_APP_INVESTMENT_CALCULATOR_H
#define AIRGEAD_BANKING_APP_INVESTMENT_CALCULATOR_H


class InvestmentCalculator {

public:   // Public member functions of the InvestmentCalculator class

	InvestmentCalculator();

	void RunFinancialSimulation(double initialInvestment, double monthlyDeposit, double annualInterestRate, int totalyears);

};

#endif //AIRGEAD_BANKING_APP_INVESTMENT_CALCULATOR_H