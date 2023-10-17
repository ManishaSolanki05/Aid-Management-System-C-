/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   AidMan.h
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
#ifndef SDDS_AIDMAN_H
#define SDDS_AIDMAN_H
#include "Menu.h"
#include "Utils.h"
#include "Date.h"
#include "iProduct.h"
#include <iostream>
#include "Perishable.h"
#include "Item.h"
namespace sdds {
    const int sdds_max_num_items = 100;
    class AidMan {
    private:
        char* fileName;
        Menu menuInfo;
        iProduct* allItems[sdds_max_num_items];
        int numberItemsArray;
        unsigned int menu() const;
        void save();
        void deallocate();
        bool load();
    public:
        AidMan();
        ~AidMan();
        AidMan(const AidMan& source) = delete;
        AidMan& operator=(const AidMan& source) = delete;
        void run();
        int list(const char* sub_desc = nullptr);
    };

}
#endif