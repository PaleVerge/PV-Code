#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
class circle
{
public:
	circle(double r);
	double area();
	void area_message(string message);
protected:
	double radius;
};
circle::circle(double r):radius(r){}
double circle::area()
{
	return PI*radius*radius;
}
void circle::area_message(string message)
{
	cout << message << area() << endl;
}
class cylinder :public circle
{
public:
	cylinder(double r, double l);
	double area();
private:
	double length;
};
cylinder::cylinder(double r, double l) :circle(r), length(l){}
double cylinder::area()
{
	return 2 * PI*(radius*radius + radius*length);
}
class sphere :public  circle
{
public:
	sphere(double r);
	double area();

};
sphere::sphere(double r) :circle(r){}
double sphere::area()
{
	return 4 * PI*radius*radius;
}