#pragma once

#include "Animal.hpp"

class Cat: public Animal{
protected:
   std::string owner;//ФИО
   std::string name;;//кличка
public:
   Cat(const std::string& type = "", const std::string& color = "", const std::string& owner = "", const std::string& name = "");
   Cat(const Cat& a);
   std::string& Owner();
    std::string& Name();
   ~Cat();
   friend std::istream& operator>>(std::istream& in, Cat& a);
   friend std::ostream& operator<<(std::ostream& out, const Cat& a);
};
