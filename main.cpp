/*
* File Name: main.cpp
 * Date: 06/1/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment, 
monthly deposit, annual interest rate, and total years to calculate 
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate 
the long-term impact of consistent savings over time.
 */


#include <iostream>
#include <memory> // For smart pointers
#include "Data/DataOutput/data_output.h"
#include "Data/DataInput/data_input.h"
#include "InvestmentCalculator/investment_calculator.h"


using namespace std;


int main() {

	//Creating modern unique pointers for our classes to ensure proper memory management and avoid memory leaks
	auto dataInput = make_unique<DataInput>();
	auto dataOutput = make_unique<DataOutput>(); 
	auto calculator = make_unique<InvestmentCalculator>(); 

	//using arrow operator instead of dot operator to call methods

	dataInput->PromptUserForData(); // Prompt the user for input data


	dataOutput->DisplayReportHeader(false); // Display the report header for the report without monthly deposits

	calculator->RunFinancialSimulation(
		dataInput->getInitialInvestment(),
		0.0,
		dataInput->GetAnnualInterestRate(),
		dataInput->GetYears()
	); // Run the financial simulation without monthly deposits

	dataOutput->DisplayReportHeader(true); // Display the report header for the report with monthly deposits

	calculator->RunFinancialSimulation(
		dataInput->getInitialInvestment(),
		dataInput->getMonthlyDeposit(),
		dataInput->GetAnnualInterestRate(),
		dataInput->GetYears());

    return 0;


}