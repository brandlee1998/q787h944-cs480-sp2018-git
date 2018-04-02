// File Name: Ticket.h
// Author: Brandon Shun Zhang Lee
// Student ID: Q787H944
// Assignment Number: 1

#include <string>
#include <cstdlib>

// class Ticket prototype
class Ticket
{
    public:
        Ticket();
        Ticket(std::string, double, double, double, double);
        void setTicketNum(std::string);
        void setGrossWt(double);
        void setTareWt(double);
        void setMoistLvl(double);
        void setForeignMat(double);
        double getNetWt();
        double getGrossBushels();
        double getMoistureDockage(double);
        double getForeignDockage();
        double getNetBushels();
        std::string getTicketNum();
        double getGrossWt();
        double getTareWt();
        double getMoistLvl();
        double getForeignMat();
    
    private:
        std::string ticketNum;
        double grossWt;
        double tareWt;
        double moistLvl;
        double foreignMat;
        static const double wtPerBushel = 60.00;
        static const double idealMoistLvl = 0.12;
};