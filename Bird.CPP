#include "Bird.hpp"

//public:
Bird::Bird(const std::string& type, const std::string& color, const std::string& eat, const std::string& areal):Animal(type, color),eat(eat), areal(areal){std::cout << "\nBird\n";}
Bird::Bird(const Bird& a):Animal(a.type, a.color),eat(a.eat),areal(a.areal){std::cout << "\nBird cpy\n";}
std::string& Bird::Eat(){ return eat;}
std::string& Bird::Areal(){ return areal;}
Bird::~Bird(){std::cout << "\n~Bird\n";}
   std::istream& operator>>(std::istream& in, Bird& a){
		a.read(in);
		return in >> a.eat >> a.areal;
   }
std::ostream& operator<<(std::ostream& out, const Bird& a){
	a.print(out);
	return out << a.eat << ' ' << a.areal;
}
