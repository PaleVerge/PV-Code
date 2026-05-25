#include <iostream>
#include <string>
using namespace std;

class employee  // Base class.
{
public:
	employee();
	employee(unsigned int number,
		string sname, string fname);
	void display_data();
	void left();
private:
	unsigned int employee_number;
	string surname;
	string forename;
	bool currently_employed;
};

// employee member functions.
employee::employee()
{
	cout << endl << "Enter Employee Number: ";
	cin >> employee_number;
	cout << "Enter Employee Name: ";
	cin >> surname >> forename;
	currently_employed = true;
}
employee::employee(unsigned int number,
	string sname, string fname)
{
	employee_number = number;
	currently_employed = true;
	surname = sname;
	forename = fname;
}

void employee::left()
{
	currently_employed = false;
}

void employee::display_data()
{
	if (currently_employed)
		cout << "Currently Employed";
	else
		cout << "Not Currently Employed";
	cout << endl << "Employee Number: " << employee_number << endl
		<< "Name: " << surname << ' ' << forename << endl;
}

class part_time : public employee
{  // part_time is a kind of employee.
public:
	part_time();
	part_time(unsigned int number,
		string sname, string fname, double _hourlyRate);
	void display_data();
private:
	double hourly_rate;
};

// part_time member functions.
part_time::part_time()
{
	cout << "Enter Hourly Rate: ";
	cin >> hourly_rate;
}
part_time::part_time(unsigned int number,
	string sname, string fname, double _hourlyRate):employee(number, sname, fname) {
	hourly_rate = _hourlyRate;
}
void part_time::display_data()
{
	employee::display_data();
	cout << "Hourly Rate: " << hourly_rate << endl;
}

class full_time : public employee
{  // full_time is a kind of employee.
public:
	full_time();
	void display_data();
private:
	double annual_salary;
	int annual_leave;
};

// full_time member functions.
full_time::full_time()
{
	cout << "Enter Salary: ";
	cin >> annual_salary;
	cout << "Enter Annual Leave (in days): ";
	cin >> annual_leave;
}

void full_time::display_data()
{
	employee::display_data();
	cout << "Salary: " << annual_salary << endl;
	cout << "Annual Leave: " << annual_leave << endl;
}

class manager : public full_time
{  // manager is a kind of full_time employee.
public:
	manager();
	void display_data();
private:
	double bonus;
};

// manager member functions.
manager::manager()
{
	cout << "Enter Bonus: ";
	cin >> bonus;
}

void manager::display_data()
{
	full_time::display_data();
	cout << "Bonus: " << bonus << endl;
}
int main()
{
	part_time p(1, "John", "smith", 20);
	p.display_data();
}