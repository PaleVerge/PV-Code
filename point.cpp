#include "iostream"
using namespace std;
class point
{
	public:
		point(int xVal=0,int yVal=0);
		void setX(int xVal);
		void setY(int yVal);
		int getX();
		int getY() ;
	private:
		int x,y;	
	
 } ;
 
 point::point(int xVal,int yVal):x(xVal),y(yVal)
 {
 	
 }
void  point::setX(int xVal)
{
	x=xVal;
	
}
void  point::setY(int yVal)
{
	y=yVal;
}
int  point::getX()
{
	return x;
}
int  point::getY() 
{
	return y;
}

