#pragma once

#include "Animal.hpp"

class Bird: public Animal{
protected:
   std::string eat;//Чем питается
   std::string areal;;//где обитает
public:
   Bird(const std::string& type = "", const std::string& color = "", const std::string& eat = "", const std::string& areal = "");
   Bird(const Bird& a);
   std::string& Eat();
    std::string& Areal();
   ~Bird();
   friend std::istream& operator>>(std::istream& in, Bird& a);
   friend std::ostream& operator<<(std::ostream& out, const Bird& a);
};
