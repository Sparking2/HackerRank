#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
//using namespace std;

struct Student
{
	int age;
	std::string first_name;
	std::string last_name;
	int standard;

};

/*
add code for struct here.
*/

int main() {
	Student st;

	std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

	return 0;
}