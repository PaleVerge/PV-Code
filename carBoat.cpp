#include<iostream>//c++标准的输入和输出流
using namespace std;//引用标准的名空间std
class vehicle
{
public:
	vehicle(int _weight);
	void setWeight(int _weight);
	void showMe();
protected:
	int weight;
};
vehicle::vehicle(int _weight)
{
	weight = _weight;
}
void vehicle::setWeight(int _weight)
{
	weight = _weight;
}
void vehicle::showMe()
{
	cout << "I am an vehicle, my weight is " << weight<<endl;
}
class car : public vehicle
{
public:
	car(int _weight, int _aird);
	void showMe();
private:
	int aird;
};
car::car(int _weight, int _aird) :vehicle(_weight), aird(_aird){}
void car::showMe()
{
	cout << "I am a car, my weight is " << weight << endl;
}
class boat : public vehicle
{
public:
	boat(int _weight, float _tonnage);
	void showMe();
private:
	float tonnage;
};
boat::boat(int _weight, float _tonnage):vehicle(_weight),tonnage(_tonnage){}
void boat::showMe()
{
	cout << "I am a  boat , my weight is " << weight << endl;
}