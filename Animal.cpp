#include "Animal.hpp"

using namespace std;
//protected:
   void Animal::read(std::istream& in){
		in >> type >> color;
   }
   void Animal::print(std::ostream& out) const{
	   out << type << ' ' << color << '\n';
   }
//public:
   Animal::Animal(const std::string& type, const std::string& color):type(type), color(color){ std::cout << "\nAnimal\n";}
   Animal::Animal(const Animal& a):type(a.type), color(a.color){std::cout << "\nAnimal cpy\n";}
   string& Animal::Color(){return color;}
   string& Animal::Type(){return type;}
   Animal::~Animal(){ std::cout << "\n~Animal\n"; }
