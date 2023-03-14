#include<iostream>
#include<string>
using namespace std;
int main()
{
bool flag;
	
int i , b;
string a = "welcome to c++ Programming 101";
b = a.length();

for(i=0;i<b;i++)
{		
  if ((a.at(i) == '0') || (a.at(i) =='9'))	
  {
	flag = 1;
  }
}

if(flag==1)
{
	cout << "The input string contains a digit";
}
else
{
	cout << "The input string does not contains a digit";
}


	
	return 0;
}
