#include<iostream>
using namespace std;
int main()
{
	char num;
	
	cout << "Enter a character: "; cin >> num ;
	
	if((num >= 'A' || num >= 'a' ) && (num <= 'Z' || num <= 'z'))
	{
	cout << "good";
    }   
	else
	{
	cout << "not";
    }   
return 0;

}
