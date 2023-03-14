#include<iostream>
using namespace std;
int main()

{
int num_week;

cout << "Enter any value from 1 to 7 that represents a day in a week: ";
cin >> num_week;

switch(num_week)
{
case 1:
cout <<"\nSunday";
break;

case 2:
cout <<"\nMonday";
break;

case 3:
cout <<"\nTuesday";
break;

case 4:
cout <<"\nWednesday";
break;

case 5:
cout <<"\nThursday";
break;

case 6:
cout <<"\nFriday";
break;

case 7:
cout <<"\nSaturday";
break;

default:
cout << "\nInvalid Input";	
}

return 0;	
	
}
