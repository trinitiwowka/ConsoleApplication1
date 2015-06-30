#include<iostream>
#include<string>
using namespace std;
class Human
{
public:
	int get_age();
	void put_age();
	string get_who();
	void put_who();

private:
	int age;
	string who;
};
class son :public Human
{
public:
	void print_about_sun() { cout << "Hello i son my parrents, you must die"; }
};

int main()
{ 

	while (1)
	{
		Human man;
		cout << "enter age:"; man.put_age();
		cout << "\nenter name:"; man.put_who();

		cout << "Hame: " << man.get_who() << "\tage: " << man.get_age() << endl;
		//cerr << "!error not found!";
	}
}

int Human::get_age()
{
	return age;
}

void Human::put_age()
{
	int buf;
	cin >> buf;
	if (cin.fail())
	{
		cin.clear(); cin.get(); buf = 0;
	}
	Human::age = buf;
}

string Human::get_who()
{
	return who;
}

void Human::put_who()
{
	string buf;
	cin >> buf;
	Human::who = buf;
}
