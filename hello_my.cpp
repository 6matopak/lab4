#include <iostream>
#include <string>

int main()
{
    using namespace ;
    setlocale(LC_ALL, "Russian");
    string name;
    std::cout << "Введите имя" << std::endl
    std::cin >> name;
    std::cout << "Hello World from "<<name<<std::endl;
	return(0);
}

