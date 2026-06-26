/*
* File Name: investment_calculator.cpp
 * Date: 06/1/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */



#include "investment_calculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

InvestmentCalculator::InvestmentCalculator() { // Default constructor, no initialization needed for this class


}

void InvestmentCalculator::RunFinancialSimulation(double initialInvestment, double monthlyDeposit, double annualInterestRate, int totalYears)
{

    double currentBalance = initialInvestment;

	for (int currentYear = 1; currentYear <= totalYears; currentYear++) { // Loop through each year of the simulation


        double yearlyInterestAccumulator = 0.0;


		for (int month = 1; month <= 12; ++month) { // Loop through each month of the current year


            currentBalance += monthlyDeposit; // Add monthly deposit to the current balance


            double monthlyInterest = currentBalance * ((annualInterestRate / 12.0) / 100.0); // Calculate monthly interest

            currentBalance += monthlyInterest; // Add monthly interest to the current balance

            yearlyInterestAccumulator += monthlyInterest; // Accumulate the interest earned for the year

        }

        cout << fixed << setprecision(2); // Set fixed-point notation and precision for currency formatting

        cout << "\033[32m " << setw(5) << left << currentYear
            << "           " << right << "$" << setw(10) << currentBalance 
            << "           " << right << "$" << setw(10) << yearlyInterestAccumulator <<"\033[0m" << endl;

        // Output the year, year-end balance, and year-end earned interest in a formatted manner
    }



}