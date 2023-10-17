/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   Utils.h
Name:       Manisha Solanki
Email:      msolanki7@myseneca.ca
Student ID: 162281216
Date:       10/4/22
Version:    1
-----------------------------------------------------------
I have done all the coding by myself and only copied the
code that my professor provided to complete my workshops
and assignments.
-----------------------------------------------------------
*/
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <iostream>
namespace sdds {
    const int sdds_testYear = 2022;
    const int sdds_testMon = 03;
    const int sdds_testDay = 31;
    class Utils {
        bool m_testMode = false;
    public:
        void getSystemDate(int* year = nullptr, int* mon = nullptr, int* day = nullptr);
        int daysOfMon(int mon, int year)const;
        void testMode(bool testmode = true);
        unsigned int getIntegerWithRange(unsigned int maxValue, unsigned int minValue = 0, std::istream& istr = std::cin);
        double getDoubleWithRange(double maxValue, double minValue = 0, std::istream& istr = std::cin);
    };
    extern Utils ut;
}

#endif