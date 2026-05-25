#include <iostream>
using namespace std;

class rectangle{
	public:
		rectangle(int w, int h):width(w),height(h){}
		int calc_area(){
			return(width * height);
		}
		void display_dimensions(){
			cout<<"Dimensions of rectangle: "<<width<<" X "<<height << endl;
		}
		void display_area(){
			cout << "Area of rectangle: " << calc_area() << endl;	
		}
	private:    
		int width, height;
};


class squre :protected rectangle{
	public:
		squre(int side):rectangle(side,side){}
		void display_dimension(){
			cout<<"Dimension of squre: "<<width<<endl;
		}
		void display_area(){
			cout << "Area of squre: " << calc_area() << endl;	
		}
};
int main(){
	rectangle r(2,3);
	r.display_area();
	r.display_dimensions();
	
	squre s(2);
	s.display_area();
	//s.display_dimensions();
	s.display_dimension();
	cout<<r.width;
	return 0;
}
