#include<iostream>
using namespace std;
int main()
{
	int num1 ,num2;
	cout << "Enter two integer number: "; cin >> num1 >> num2;
	if(num1 > num2)
	{
		num1-=1;
		for(num1;num1 > num2;num1--)
		{
			cout << num1 << " ";
		}
		
		
	}
	
	else if(num2> num1)
	{
		num1+=1;
		for(num1;num1 < num2;num1++)
		{
			cout << num1 << " ";;
		}
		
		
	}
	
}
