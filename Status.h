/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   Status.h
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
#ifndef SDDS_STATUS_H
#define SDDS_STATUS_H
#include <iostream>
namespace sdds {
    class Status {
       
        char* description;
        int errorCode;

    public:
        Status(const char* Description = nullptr);
        ~Status();
        Status(const Status& srcStatus);
        Status& operator=(const Status& srcStatus);
        Status& operator=(int newCode);
        Status& operator=(const char* newDescription);
        operator int() const;
        operator const char* () const;
        operator bool() const;
        void set(const char* Description, int code = 0);
        Status& clear();


    };
    std::ostream& operator<<(std::ostream& os, const Status& status);

}
#endif