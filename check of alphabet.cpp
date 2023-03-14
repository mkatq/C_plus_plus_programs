#include<iostream>
using namespace std;
int main()


{
char alphabet;

cout << " Please enter a character: ";	
cin >> alphabet ;

if( (alphabet >= 'a' || alphabet >= 'A') && (alphabet <= 'z' || alphabet <= 'Z' ) )
{
cout << alphabet << " is an alphabet";
}
else
{
cout << alphabet << " is not an alphabet";
}


return 0;	
	
}
