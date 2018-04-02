// File Name: Ticket.cpp
// Author: Brandon Shun Zhang Lee
// Student ID: Q787H944
// Assignment Number: 1

/*
 Pseudo Code:
    create default constructors to set default values to member variables
	blank for ticketNum and 0.00 for grossWt, tareWt, moistLvl and foreignMat
	create constructor that accepts parameters
	use mutator functions to set values in constructor
	create mutator functions for all private member vars
	create accessor funcs for all private  member vars
	create get funcs for data that needs to be calculated
	getNetWt, getMoistureDockage, getForeignDockage, getNetBushels
*/

#include <iostream>
#include <string>
#include "Ticket.h"

using namespace std;

// default constructor
Ticket::Ticket()
{
    ticketNum = " ";
    grossWt = 0.00;
    tareWt = 0.00;
    moistLvl = 0.00;
    foreignMat = 0.00;
}

// constructor that accepts parameters
Ticket::Ticket(string TicketNum1, double grossWt1, double tareWt1, double moistLvl1, double foreignMat1)
{
    setTicketNum(TicketNum1);
    setGrossWt(grossWt1);
    setTareWt(tareWt1);
    setMoistLvl(moistLvl1);
    setForeignMat(foreignMat1);
}

// set func for ticket number
void Ticket::setTicketNum(string userInput1)
{
    ticketNum = userInput1;
}

// set func for gross weight
void Ticket::setGrossWt(double userInput2)
{
    if(userInput2 >= 0.00)
        grossWt = userInput2;
}

// set func for tare weight
void Ticket::setTareWt(double userInput3)
{
    if(userInput3 >= 0.00)
        tareWt = userInput3;
}

// set func for moisture level
void Ticket::setMoistLvl(double userInput4)
{
    if(userInput4 >= 0.00)
        moistLvl = userInput4 / 100;
}

// set func for foreign material
void Ticket::setForeignMat(double userInput5)
{
    if(userInput5 >= 0.00)
        foreignMat = userInput5 / 100;
}

// get func for net weight
double Ticket::getNetWt()
{
    double netWt;
    netWt = grossWt - tareWt;
    
    return netWt;
}

// get func for gross bushels
double Ticket::getGrossBushels()
{
    double grossBushels;
    grossBushels = getNetWt() / wtPerBushel;
    
    return grossBushels;
}

// get func for moisture dockage
double Ticket::getMoistureDockage(double moistLvl)
{
    double moistDockage;
    
    if(moistLvl > 0.12)
        moistDockage = getGrossBushels() * (moistLvl - idealMoistLvl);
    else
        moistDockage = 0.00;
    
    return moistDockage;
}

// get func for foreign material dockage
double Ticket::getForeignDockage()
{
    double foreignDockage;
    foreignDockage = getGrossBushels() * foreignMat;
    
    return foreignDockage;
}

// get func for net bushels
double Ticket::getNetBushels()
{
    double netBushels;
    netBushels = getGrossBushels() - getMoistureDockage(moistLvl) - getForeignDockage();
    
    return netBushels;
}

// get func for ticket number
string Ticket::getTicketNum()
{
    return ticketNum;
}

// get func for gross weight
double Ticket::getGrossWt()
{
    return grossWt;
}

// get func for tare weight
double Ticket::getTareWt()
{
    return tareWt;
}

// get func for moisture level percentage
double Ticket::getMoistLvl()
{
    return moistLvl;
}

// get func for foreign material percentage
double Ticket::getForeignMat()
{
    return foreignMat;
}
