#pragma once

#include "Animal.hpp"

class Fish: public Animal{
protected:
   std::string eate;//питание
public:
   Fish(const std::string& type = "", const std::string& color = "", const std::string& eate = "");
   Fish(const Fish& a);
   std::string& Eate();
   ~Fish();
   friend std::istream& operator>>(std::istream& in, Fish& a);
   friend std::ostream& operator<<(std::ostream& out, const Fish& a);
};
