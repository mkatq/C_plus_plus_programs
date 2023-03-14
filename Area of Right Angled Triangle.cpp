#include<iostream>
using namespace std;
int main()


{
	int base , perpendicular;
	float area;
	
  cout << "Enter the length of base: ";
  cin >> base;
  
  cout << "Enter the perpendicular: ";
  cin >> perpendicular;

  area = 0.5 * base * perpendicular;
  
  cout << "\nArea of Right Triangle: " << area;


return 0;	
	
}
