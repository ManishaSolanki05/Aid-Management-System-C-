/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   Perishable.h
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
#ifndef SDDS_PERISHABLE_H
#define SDDS_PERISHABLE_H
#include "Date.h"
#include "Item.h"
#include <iostream>
namespace sdds {
    class Perishable : public Item {

    private:
        Date m_expiry;
        char* instruction;
    public:
        
        Perishable();
        
        ~Perishable();
       
        Perishable(const Perishable& src);
        
        Perishable& operator=(const Perishable& src);
       
        const Date& expiry() const;
        
        std::ofstream& save(std::ofstream& ofstr)const;
       
        std::ifstream& load(std::ifstream& ifstr);
        
        std::ostream& display(std::ostream& ostr)const;
        
        int readSku(std::istream& istr);
        
        std::istream& read(std::istream& istr);

        operator bool() const;
    };
}
#endif