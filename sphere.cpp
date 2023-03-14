#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	
float volume, surface;
const float PI = 3.1416;
float radius;

cout << "Enter radius of sphere: ";
cin >> radius;

volume = (4 * PI * radius * radius * radius) /3;
surface = (4 * PI * radius * radius);

cout << "Volume = " << fixed << setprecision(2) << volume << endl;
cout << "Surface area " << fixed << setprecision(2) << surface;


return 0;

}
