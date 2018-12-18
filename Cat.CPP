#include "Cat.hpp"

//public:
Cat::Cat(const std::string& type, const std::string& color, const std::string& owner, const std::string& name):Animal(type, color),owner(owner), name(name){std::cout << "\nCat\n";}
Cat::Cat(const Cat& a):Animal(a.type, a.color),owner(a.owner),name(a.name){std::cout << "\nCat cpy\n";}
std::string& Cat::Name(){ return name;}
std::string& Cat::Owner(){ return owner;}
Cat::~Cat(){std::cout << "\n~Cat\n";}
   std::istream& operator>>(std::istream& in, Cat& a){
		a.read(in);
		return in >> a.name >> a.owner;
   }
std::ostream& operator<<(std::ostream& out, const Cat& a){
	a.print(out);
	return out << a.name << ' ' << a.owner;
}
