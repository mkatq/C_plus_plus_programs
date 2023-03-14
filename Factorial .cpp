#include<iostream>
using namespace std;
int main( )
{
 int num , sum = 1 ,a;
 
 cout << "Enter a positive integer: ";
 cin >> num;
 a = num;
 
 if(num > 0)
  {
 for(num ; num >= 1 ; num--)
   { 
	sum *= num;
   }

 cout << "Factorial of " << a << " = " << sum;
  }
  
 else
   {
   	cout << "\amust be integer number!";
   }
  
  
  
return 0;
}




