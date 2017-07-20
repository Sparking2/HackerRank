#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <string>

class Person
{
public:
	string name;
	int age;
	virtual void getdata()
	{}
	virtual void putdata()
	{}
};


class Professor : public Person
{
public:
	int publications, cur_id;
	static int professorID;
	virtual void getdata();
	virtual void putdata();

};
int Professor::professorID = 0;
void Professor::getdata()
{
	cin >> name;
	cin >> age;
	cin >> publications;
	professorID++;
	cur_id = professorID;
}
void Professor::putdata()
{
	cout << name << " " << age << " " << publications << " " << cur_id << endl;
}

class Student : public Person
{
public:
	static int studentID;
	int marks[6];
	int cur_id;
	void getdata();
	void putdata();
};
int Student::studentID = 0;
void Student::getdata()
{
	cin >> name;
	cin >> age;
	for (int i = 0; i < 6; i++)
	{
		cin >> marks[i];
	}
	studentID++;
	cur_id = studentID;
}
void Student::putdata()
{
	cout << name << " " << age << " ";
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum += marks[i];
	}
	cout << sum << " " << cur_id << endl;
}
/*
int VirtualFunctions()
{


	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++)
	{

		cin >> val;
		if (val == 1)
		{
// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i < n; i++)
		per[i]->putdata(); // Print the required output for each object.
	return 0;

}
*/


