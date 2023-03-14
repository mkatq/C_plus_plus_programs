#include<iostream>
using namespace std;
int main()
{
int num , c=0 , sum=0;
do
{
sum = sum + num;	
c++;

cout << "Enter the number: " << endl;
cin >> num;
 
 if(num < 0)
 {
 	cout << "There are no marks entered" << endl;
 }
}
while(num>=0);	
	
cout << sum/c;	
	
}

