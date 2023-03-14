#include<iostream>
using namespace std;
int main()

{
int num , reightnum , rev = 0;
cout << "Please enter a number to reverse: ";
cin >> num;	

while(num != 0)
{
reightnum =  num % 10; 

rev = (rev*10) + reightnum;	
	
num = num / 10; 
}

cout << "The reverse number is " << rev;	

return 0;
}
