// File Name: WheatHarvest.cpp
// Author: Brandon Shun Zhang Lee
// Student ID: Q787H944
// Assignment Number: 1

/*
 Pseudo Code:
    function: readUserInput
    input: string ticketNumber, double grossWt, tareWt, moistLvl, foreignMat
    output: void
    purpose: to prompt user for data input for relevant data
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Ticket.h"

using namespace std;

void readUserInput(string &ticketNum1, double &grossWt1, double &tareWt1, double &moistLvl1, double &foreignMat1);

int main()
{

	// declaring variables
    string ticketNum1;
    double grossWt1, tareWt1, moistLvl1, foreignMat1;
    
	// data prompt from user
    readUserInput(ticketNum1, grossWt1, tareWt1, moistLvl1, foreignMat1);
	
	// creating instance of ticket1 from class Ticket
    Ticket ticket1(ticketNum1, grossWt1, tareWt1, moistLvl1, foreignMat1);
    cout << endl << endl;
    
	// set precision to 2 decimal points
	cout << fixed << showpoint;
	cout << setprecision(2);
	
	// Final output of program
    cout << "Ticket " << ticket1.getTicketNum() << ":" << endl;
	cout << "\t" << ticket1.getGrossWt() << " Gross Weight" << endl;
    cout << "\t" << ticket1.getTareWt() << " Tare Weight" << endl;
	cout << "\t" << ticket1.getNetWt() << " Net Weight" << endl;
	cout << endl;
	cout << "\t" << ticket1.getGrossBushels() << " Gross Bushels" << endl;
	cout << "\t" << ticket1.getMoistureDockage(ticket1.getMoistLvl()) << " Moisture Level (" << ticket1.getMoistLvl() * 100 << "%)" << endl;
	cout << "\t" << ticket1.getForeignDockage() << " Foreign Material (" << ticket1.getForeignMat() * 100 << "%)"  << endl;
	cout << "\t" << ticket1.getNetBushels() << " Net Bushels" << endl;


	//program terminated successfully
    return 0;

}

// function implementation
void readUserInput(string &ticketNum1, double &grossWt1, double &tareWt1, double &moistLvl1, double &foreignMat1)
{
    int flag = 1;
    double grossWt2, tareWt2, moistLvl2, foreignMat2;
    cout << "Ticket number: ";
    cin >> ticketNum1;
    
    do
    {
        cout << "Gross weight (lbs): ";
        cin >> grossWt2;
        if(grossWt2 >= 0.00)
        {
            grossWt1 = grossWt2;
            flag = 1;
        }
        else
        {
            cerr << "Invalid data input for Gross Weight." << endl;
            flag = 0;
        }
    }while (flag == 0);
    
    do
    {
        cout << "Tare weight (lbs): ";
        cin >> tareWt2;
        if(tareWt2 >= 0.00)
        {
            tareWt1 = tareWt2;
            flag = 1;
        }
        else
        {
            cerr << "Invalid data input for Tare Weight." << endl;
            flag = 0;
        }
    }while (flag == 0);
    
    do
    {
        cout << "Moisture level (%): ";
        cin >> moistLvl2;
        if(moistLvl2 >= 0.00)
        {
            moistLvl1 = moistLvl2;
            flag = 1;
        }
        else
        {
            cerr << "Invalid data input for Moist Level." << endl;
            flag = 0;
        }
    }while (flag == 0);
    
    do
    {
        cout << "Foreign material (%): ";
        cin >> foreignMat2;
        if(foreignMat2 >= 0.00)
        {
            foreignMat1 = foreignMat2;
            flag = 1;
        }
        else
        {
            cerr << "Invalid data input for Foreign Material." << endl;
            flag = 0;
        }
    }while (flag == 0);
    
}

