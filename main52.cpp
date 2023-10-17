/*
------------------------------------------------------------
Project 1 Milestone 5
Filename:   main.cpp
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
#include <iostream>
#include <fstream>
#include "AidMan.h"
#include "Utils.h"
using namespace sdds;
using namespace std;

void copyfile(const char* to, const char* from);
void displayFile(const char* file);

int main() {
   copyfile("data.dat", "data52.dat");
   ut.testMode();
   AidMan().run();
   displayFile("data.dat");
   return 0;
}

void displayFile(const char* file) {
   ifstream in(file);
   char ch;
   cout << "File: " << file << endl;
   while (in.get(ch)) cout << ch;
}

void copyfile(const char* to, const char* from) {
   std::ifstream in(from);
   std::ofstream out(to);
   char ch;
   while (in.get(ch)) out.put(ch);
}