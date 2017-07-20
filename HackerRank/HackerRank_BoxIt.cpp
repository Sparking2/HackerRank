//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Box
{
public:
	Box();
	Box(int l, int b, int h);
	Box(Box &b);
	~Box();
	int getLength();
	int getBreadth();
	int getHeight();
	long long CalculateVolume();
private:
	int lenght, breadth, height;

};

ostream& operator << (ostream& out, Box& B) {
	 out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	 return out;
}

bool operator < (Box& a, Box& b) {
	if ((a.getLength() < b.getLength()) ||
		(a.getBreadth() < b.getBreadth() && a.getLength() == b.getLength()) || 
		(a.getHeight() < b.getHeight() && a.getBreadth() < b.getBreadth() && a.getLength() < b.getLength()))
		return true;
	else
		return false;
}


Box::Box()
{
	lenght = breadth = height = 0;
}
Box::Box(int l, int b, int h) {
	lenght = l;
	breadth = b;
	height = h;
}
Box::Box(Box &B) {
	lenght = B.lenght;
	breadth = B.breadth;
	height = B.height;
}
Box::~Box()
{
}
int Box::getLength() {
	return lenght;
}
int Box::getBreadth() {
	return breadth;
}
int Box::getHeight() {
	return height;
}
long long Box::CalculateVolume()
{
	long long volume = (long long)lenght * (long long)breadth * (long long)height;
	return volume;
}


void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i<n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox<temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}


int main()
{
	check2();
}
