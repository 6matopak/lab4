#include <iostream>
#include <string>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    string name;
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Hello World from "<<name<<endl;
}

