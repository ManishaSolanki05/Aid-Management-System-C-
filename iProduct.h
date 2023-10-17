/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   iProduct.h
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
#ifndef SDDS_IPRODUCT_H
#define SDDS_IPRODUCT_H
#include <iostream>
namespace sdds {



    class iProduct {
    public:
        
        virtual ~iProduct();

        virtual int readSku(std::istream& istr) = 0;
        
        virtual int operator-=(int qty) = 0;
       
        virtual int operator+=(int qty) = 0;
        
        virtual operator double()const = 0;
        
        virtual operator bool()const = 0;
        
        virtual int qtyNeeded()const = 0;
        
        virtual int qty()const = 0;
        
        virtual void linear(bool isLinear) = 0;
        
        virtual std::ofstream& save(std::ofstream& ofstr)const = 0;
        
        virtual std::ifstream& load(std::ifstream& ifstr) = 0;
        
        virtual std::ostream& display(std::ostream& ostr)const = 0;
        
        virtual std::istream& read(std::istream& istr) = 0;
        
        virtual bool operator==(int sku)const = 0;
        
        virtual bool operator==(const char* description)const = 0;
        virtual operator const char* () const = 0;

    };

    std::ostream& operator<<(std::ostream& os, const iProduct& product);
    std::istream& operator>>(std::istream& istr, iProduct& product);

}
#endif