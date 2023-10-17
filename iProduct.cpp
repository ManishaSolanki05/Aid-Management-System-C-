/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   iProduct.cpp
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

#define _CRT_SECURE_NO_WARNINGS


#include "iProduct.h"

namespace sdds {

    iProduct::~iProduct() {


    };

    std::ostream& operator<<(std::ostream& os, const iProduct& product) {

        return product.display(os);


    };

    std::istream& operator>>(std::istream& istr, iProduct& product) {

        return product.read(istr);

    };


}