#include<iostream>

using namespace std;
int main()

{
cout << "Please put these angals\n" ;
	
int a , b , c;

cout << "frist angles is equal to:"; cin >> a; 
cout << "\nsecond angles is equal to:"; cin >> b;
cout << "\nthird angles is equal to: "; cin >> c;
	

	cout << (a+b+c==180? "a valid triangle." : "is not a valid triangle.");
		

return 0;
}
