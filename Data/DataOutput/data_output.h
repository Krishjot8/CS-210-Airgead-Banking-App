/*
* File Name: data_output.h
 * Date: 06/5/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */


#ifndef AIRGEAD_BANKING_APP_DATA_OUTPUT_H
#define AIRGEAD_BANKING_APP_DATA_OUTPUT_H


class DataOutput {
private:


public:   //DisplayReportHeader function to show in data_output.cpp

	void DisplayReportHeader(bool withDeposits);
	
};


#endif //AIRGEAD_BANKING_APP_DATA_OUTPUT_H
