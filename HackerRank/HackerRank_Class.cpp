#include <iostream>
#include <sstream>
#include <string>
//using namespace std;

class  Student
{
public:
	 Student();
	~ Student();
	void set_age(int age_in);
	void set_standard(int standart_in);
	void set_first_name(std::string name);
	void set_last_name(std::string last);
	int get_age();
	int get_standard();
	std::string get_first_name();
	std::string get_last_name();
	std::string to_string();

private:
	int age, standard;
	std::string first_name, last_name;
};
 Student:: Student()
{
}
 Student::~ Student()
{
}
 void Student::set_age(int age_in)
 {
	 age = age_in;
 }
 void Student::set_standard(int standard_in)
 {
	 standard = standard_in;
 }
 void Student::set_first_name(std::string name)
 {
	 first_name = name;
 }
 void Student::set_last_name(std::string last) {
	 last_name = last;
 }
 std::string Student::to_string()
 {
	 std::string msg;
	 msg = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
	 return msg; 
 }
 int Student::get_age() {
	 return age;
 }
 int Student::get_standard() {
	 return standard;
 }
 std::string Student::get_first_name() {
	 return first_name;
 }
 std::string Student::get_last_name() {
	 return last_name;
 }

/*
Enter code for class Student here.
Read statement for specification.
*/

int Classes() {
	int age, standard;
	std::string first_name, last_name;

	std::cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	std::cout << st.get_age() << "\n";
	std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	std::cout << st.get_standard() << "\n";
	std::cout << "\n";
	std::cout << st.to_string();

	return 0;
}
