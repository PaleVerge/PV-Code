#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
	int total_seconds;
	cin >> total_seconds;  
	
	const int SEC_PER_DAY = 3600 * 24;  
	int days = total_seconds / SEC_PER_DAY;
	
	int remaining = total_seconds % SEC_PER_DAY;
	int hours = remaining / 3600;
	remaining %= 3600;
	int minutes = remaining / 60;
	int seconds = remaining % 60;
	

	cout << days << " "
	<< setw(2) << setfill('0') << hours << ":"
	<< setw(2) << minutes << ":"  
	<< setw(2) << seconds << endl;
	
	return 0;
}
