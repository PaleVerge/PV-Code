#include<iostream>//c++标准的输入和输出流
using namespace std;//引用标准的名空间std
class time24     // A simple 24 hour time class.
{
public:
	time24(int h = 0, int m = 0, int s = 0);
	void set_time(int  h, int  m, int  s);
	void get_time(int& h, int& m, int& s) const;

protected:
	int hours;   // 0 to 23
	int minutes; // 0 to 59
	int seconds; // 0 to 59
};
time24::time24(int h, int m, int s) :
hours(h), minutes(m), seconds(s)
{}

// Mutator function.
void time24::set_time(int  h, int m, int  s)
{
	hours = h; minutes = m; seconds = s;
}

// Inspector function.
void time24::get_time(int& h, int& m, int& s) const
{
	h = hours; m = minutes;  s = seconds;
}
class calendar
{
public:
	calendar(int d = 1, int m = 1, int y = 1970);
	void set_date(int  d, int  m, int  y);
	void get_date(int& d, int& m, int& y) const;
protected:
	int day;
	int month;
	int year;
};
calendar::calendar(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void calendar::set_date(int  d, int  m, int  y)
{
	day = d; month = m; year = y;
}
void calendar::get_date(int& d, int& m, int& y) const
{
	d = day; m = month; y = year;
}