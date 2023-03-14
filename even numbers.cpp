
#include<iostream>
using namespace std;
int main()
{

int counter;
int n;
cout << "Enter a number:"; cin >> n; 

cout << "Even numbers from 1 to " << n << endl;

for(counter= 1 ; counter <= n ; counter++)
{
if(counter % 2 != 0)
continue;

cout << counter << endl ; 
}
return 0;
}
