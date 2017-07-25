#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

int main() {
	int queryNum,option,mark;
	std::string name;
	std::map<std::string, int>m;
	std::cin >> queryNum;

	for (int i = 0; i < queryNum; i++)
	{
		std::map<std::string, int>::iterator itr;
		std::cin >> option;
		std::cin >> name;
		switch (option)
		{
		case 1:
			std::cin >> mark;
			itr = m.find(name);
			if (itr != m.end())
				m[name] = m[name] + mark;
			else
				m.insert(std::make_pair(name, mark));
			break;
		case 2:
			m[name] = 0;
			break;
		case 3:
			std::cout << m[name] << std::endl;
			break;
		default:
			std::cout << "ERROR" << std::endl;
			break;
		}
	}
	return 0;
}