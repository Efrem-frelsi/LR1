#include "Bird.hpp"
#include "Fish.hpp"
#include "Cat.hpp"
#include "Keeper.hpp"

#include <fstream>

using namespace std;

//подменю
template<typename T>
void submenu(const char *fname){
   int size;
   Keeper<T> kp;
   //загрузка из файла
   ifstream in(fname);
   T tmp;
   if(in){
		while(in >> tmp){kp.Add(tmp);}
   }
   in.close();
   
   while(true){
	   system("cls");
	  cout << "1. Добавить\n2. Удалить\n3. Изменить\n4. Отобразить\n5. Выход\n";
	  while(!(cin >> size));
	  switch(size){
		case 1:
			try{
				cin >> tmp;
				kp.Add(tmp);
			}
			catch(const Exception& e){
				cout << e.what();
			}
			break;
		case 2:
			try{
				cout << "Введите индекс: ";
				while(!(cin >> size));
				kp.Remove(size);
			}
			catch(const Exception& e){
				cout << e.what();
			}
			break;
		case 3:
			try{
				cout << "Введите индекс: ";
				while(!(cin >> size));
				cin >> kp[size];
			}
			catch(const Exception& e){
				cout << e.what();
			}
			break;
		case 4:
			for(int i = 0; i < kp.Size(); ++i){
				cout << '\n' << kp[i];
			}
			break;
		case 5:
			system("cls");
			MenuM();
			return;
		}
	   ofstream out(fname);
	   out << kp.Size();
	   for(int i = 0; i < kp.Size(); ++i){
			out << '\n' << kp[i];
	   }
	   
	   out.close();
	  cout << '\n';
	 system("pause");
   }
}
//главное меню
void MenuM(){
	cout << "1. Птица\n2. Рыба\n3. Кошка\n4. Выход\n";
	int a;
	while(!(cin >> a));
	switch(a){
	case 1:
		submenu<Bird>("bird");
		break;
	case 2:
		submenu<Fish>("fish");
		break;
	case 3:
		submenu<Cat>("cat");
		break;
	case 4:
		return;
	}
}

int main(){
  setlocale(LC_ALL, "");
  MenuM(); 

}
