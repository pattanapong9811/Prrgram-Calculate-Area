#include <iostream>
using namespace std;
int main()
{
	
	int length,widht;
	float  radius;
	cout << "Program Calculate Area Rectangle." << endl;
	cout << "Enter Length : ";
	cin >> length ;
	cout << "Enter Widht : ";
	cin >> widht ;
	cout << "Area of Rectagle = " << length * widht << endl;
	cout <<"========================================================" << endl;
	cout << "Program Calculate Area Circle."<<endl;
	cout << "Circle radius (real number) ? " ;
	cin >> radius ;
	cout << "Area of circle with radius 5.1 is " << radius*radius*3.1415 <<endl;
	cout << "Circumference is " << 2*radius*3.1415 << endl;
	return(0);
}
