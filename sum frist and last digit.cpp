#include<iostream>
using namespace std;
int main()
{
 int num , frist=0 , last=0;
 cin >> num;
 
 last = num % 10;
 
 while(num>=10)
{
  	num= num/10;
}
  frist = num;
 
 cout << frist + last;
}
