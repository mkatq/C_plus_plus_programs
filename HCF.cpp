#include<iostream>
using namespace std;
int main()
{
bool flag = true; int num1 , num2;
	
cout << "Enter two number: "; cin >> num1 >> num2;
while(flag)
{
	if(num1 > num2)
	{
		num1= num1-num2;
		cout << "The HCF:" << num1;
		break;
	}
	else if (num1 < num2)
	{
		num2=num2-num1;
		cout << "The HCF:" << num2;
		break;
	}
	
	if(num1==num2)
	{
		flag = false;
	}
}
 
 
 
 return 0;
}
