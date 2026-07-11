//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class robot{
public:
    robot(float x = 0, float y = 0) : x_coord( x ), y_coord(y)
    {}
    // Inspector function to display the robot's position.
    void display_position(){
        cout << "(" << x_coord << "," << y_coord << ")" << endl ;
    }
    void left(double x){
        x_coord-=x;
    }
    void right(double x){
        x_coord+=x;
    }
    void forward(double x){
        y_coord-=x;
    }
    void back(double x){
        y_coord+=x;
    }
    void gotoDest(double x,double y){
        x_coord=x,y_coord=y;
    }
    void return_to_base(){
        x_coord=0,y_coord=0;
    }
private:
    float x_coord, y_coord ;
} ;


int main()
{
    double destX,destY;
    robot r2d2( 10.0, 8.1 ) ; // Constructor sets the initial
    // position.
    r2d2.left( 1.3 ) ; // Move robot left 1.3 cms.
    // New position is (8.7,8.1)
    r2d2.display_position() ;
    r2d2.back(4.21) ; // Move robot back 4.21 cms.
    // New position is (8.7,12.31)
    r2d2.display_position() ;
    r2d2.right( 3.1 ) ; // Move robot right 3.1 cms.
    // New position is (11.8,12.31)
    r2d2.display_position() ;
    r2d2.return_to_base() ; // Sets the position to (0,0).
    r2d2.back(0.6);
    r2d2.forward( 0.3 ); // Move robot forward 3.1 cms.
    // New position is (0,0.3).
    r2d2.display_position();
    cin>>destX>>destY;
    r2d2.gotoDest( destX, destY );
    r2d2.display_position();
    return 0;
}