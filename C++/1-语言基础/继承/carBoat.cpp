#include<iostream>
using namespace std;

class vehicle{
	protected:
		int weight;
	public:
		vehicle(int _weight){
			weight = _weight;
		}
		void setWeight(int _weight){
			weight = _weight;
		}
		void showMe(){
			cout << "I am an vehicle, my weight is " << weight<<endl;
		}
};

class  car : virtual public vehicle{
	private:
		int aird;
	public:
		car(int _weight, int _aird):vehicle(_weight), aird(_aird){}
		void showMe(){
			cout << "I am a car, my weight is " << weight << endl;
		}
};

class boat : virtual public vehicle{
	private:
		float tonnage;
	public:
		boat(int _weight, float _tonnage):vehicle(_weight),tonnage(_tonnage){}
		void showMe(){
			cout << "I am a  boat , my weight is " << weight << endl;
		}
};

class amphibicar:public boat,public car{
	public:
		void showMe(){
			cout << "I am a amphibicar , my weight is " << weight << endl;
		}
		amphibicar(int _weight,int _aird,float _tonnage):vehicle(_weight),car(_weight,_aird),boat(_weight,_tonnage){}
};

int main(){
	amphibicar a(10,20,30);
	a.showMe();
	return 0;
}
