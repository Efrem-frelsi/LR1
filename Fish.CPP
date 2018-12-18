#include "Fish.hpp"

//public:
Fish::Fish(const std::string& type, const std::string& color, const std::string& eate):Animal(type, color), eate(eate){std::cout << "\nFish\n";}
Fish::Fish(const Fish& a):Animal(a.type, a.color),eate(a.eate){std::cout << "\nFish cpy\n";}
std::string& Fish::Eate(){ return eate;}
Fish::~Fish(){std::cout << "\n~Fish\n";}
   std::istream& operator>>(std::istream& in, Fish& a){
		a.read(in);
		return in >> a.eate;
   }
std::ostream& operator<<(std::ostream& out, const Fish& a){
	a.print(out);
	return out << a.eate;
}
