/*
* File Name: data_output.cpp
 * Date: 06/5/2026
 * Author: Krishjot Sarai
 * Assignment: CS-210 Airgead Banking App
 * Description of Program:  An investment simulation tool that inputs a user's initial investment,
monthly deposit, annual interest rate, and total years to calculate
monthly compounding interest. It generates two formatted annual reports—
one with additional monthly deposits and one without—to demonstrate
the long-term impact of consistent savings over time.
 */

#include "data_output.h" // Include the header file for the DataOutput class

#include <iostream>
#include <iomanip>

using namespace std;



void DataOutput :: DisplayReportHeader(bool withDeposits)
{
    cout << endl << endl;

	if (withDeposits) { // If the report includes additional monthly deposits, display the appropriate header

   
        cout << "\033[32m     Balance and Interest With Additional Monthly Deposits      \033[0m" << endl;

    }
    else {


        cout << "\033[32m     Balance and Interest Without Additional Monthly Deposits      \033[0m" << endl;

    };


   
    cout << "\033[32m-----------------------------------------------------------------\033[0m" << endl;
    cout << "\033[32m-----------------------------------------------------------------\033[0m" << endl;

    cout << "\033[32mYear         Year End Balance        Year End Earned Interest\033[0m"  << endl;
       
    cout << "\033[32m-----------------------------------------------------------------\033[0m" << endl;






}