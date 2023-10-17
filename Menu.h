/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   Menu.h
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
#ifndef SDDS_MENU_H
#define SDDS_MENU_H
#include "Utils.h"
namespace sdds {
    class Menu {
        char* menuContext;
        unsigned int numoption;

    public:
        Menu();
        Menu(const char* MenuContext, unsigned int NumberOptions);
        ~Menu();
        void setEmpty();
        Menu(const Menu& source) = delete;
        Menu& operator=(const Menu& source) = delete;
        unsigned int run() const;
        void set(const char* MenuContext, unsigned int NumberOptions);

    };




}
#endif 


