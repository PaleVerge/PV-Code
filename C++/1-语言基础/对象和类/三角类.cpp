#include <iostream>
using namespace std;

class triangle{
	private:
		float h;
		float a;
		float area(float h,float a){
			float s=a*h/2;
			return s;
		}
	public:
		triangle(){
			cin>>h>>a;
		}
		
		bool operator<(triangle t){
			return (area(h,a)<t.area(t.h,t.a))?true:false;
		}
		bool operator==(triangle t){
			return (area(h,a)==t.area(t.h,t.a))?true:false;
		}
			
};
int main()
{
       triangle t1, t2;
       if (t1 < t2)
              cout << "t1 is smaller than t2" << endl;
       else if (t1 == t2)

              cout << "t1 and t2 are equal" << endl;
       else
              cout << "t1 is larger than t2" << endl;
       return 0;
}

