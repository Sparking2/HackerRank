#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>

//class template
template <class T>
class AddElements
{
	T element;
public:
	AddElements(int a);
	AddElements(double a);
	double double1;
	int int1;
	double add(double double2);
	int add(int int2);
};
template<class T>
AddElements<T>::AddElements(int a)
{
	int1 = a;
}
template<class T>
AddElements<T>::AddElements(double a)
{
	double1 = a;
}
template<class T>
double AddElements<T>::add(double double2)
{
	return double1 + double2;
}
template<class T>
int AddElements<T>::add(int int2)
{
	return int1 + int2;
}


template <>
class AddElements<std::string> {
	std::string element;
public:
	std::string string1;
	AddElements(std::string a);
	std::string concatenate(std::string b);
};
AddElements<std::string>::AddElements(std::string a)
{
	string1 = a;
}
std::string AddElements<std::string>::concatenate(std::string b)
{
	return string1 + b;
}

int main() {
	int n, i;
	std::cin >> n;
	for (i = 0; i<n; i++) {
		std::string type;
		std::cin >> type;
		if (type == "float") {
			double element1, element2;
			std::cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			std::cout << myfloat.add(element2) << std::endl;
		}
		else if (type == "int") {
			int element1, element2;
			std::cin >> element1 >> element2;
			AddElements<int> myint(element1);
			std::cout << myint.add(element2) << std::endl;
		}
		else if (type == "string") {
			std::string element1, element2;
			std::cin >> element1 >> element2;
			AddElements<std::string> mystring(element1);
			std::cout << mystring.concatenate(element2) << std::endl;
		}
	}
	return 0;
}