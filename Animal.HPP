#pragma once
#include "Exception.hpp"
#include <string>
#include <iostream>

class Animal{
protected:
  	
   std::string type;//порода
   std::string color;//окрас
   void read(std::istream& in);
   void print(std::ostream& out) const;
public:
   Animal(const std::string& type = "", const std::string& color = "");
   Animal(const Animal& a);
   std::string& Color();
   std::string& Type();
   virtual ~Animal();
};
