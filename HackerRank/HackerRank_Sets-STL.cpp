#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
//using namespace std;


int main() {
	std::set<int> s;
	int queryAmount,option,number;

	std::cin >> queryAmount;

	for (int i = 0; i < queryAmount; i++)
	{
		std::cin >> option;
		std::cin >> number;
		std::set<int>::iterator itr;
		switch (option)
		{
		case 1:
			s.insert(number);
			break;
		case 2:
			itr = s.find(number);
			if (itr != s.end())
				s.erase(number);
			break;
		case 3:
			itr = s.find(number);
			if (itr != s.end())
				std::cout << "Yes" << std::endl;
			else
				std::cout << "No" << std::endl;
			break;
		default:
			std::cout << "error" << std::endl;
			break;
		}
	}
	return 0;
}