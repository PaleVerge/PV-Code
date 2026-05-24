// Program example P11B
// Demonstration of inheritance.
#include <iostream>
#include <string>
using namespace std ;

class employee  // Base class.
{
public:
  employee() ;
  void display_data() ;
  void left() ;
private:
  unsigned int employee_number ;
  string surname ;
  string forename ;
  bool currently_employed ;
} ;

// employee member functions.
employee::employee()      
{
  cout << endl << "Enter Employee Number: " ;
  cin >> employee_number ;
  cout << "Enter Employee Name: " ;
  cin >> surname >> forename ;
  currently_employed = true ;
}

void employee::left()
{
  currently_employed = false ;
}

void employee::display_data()
{
  if ( currently_employed )
     cout << "Currently Employed" ;
  else
     cout << "Not Currently Employed" ;
  cout << endl << "Employee Number: " << employee_number << endl
       << "Name: " << surname << ' ' << forename << endl ;
}


main()
{
 
  full_time ft ; 
  cout << endl<< "Full-time Employee Data:" << endl ;
  ft.display_data() ;
  
}
